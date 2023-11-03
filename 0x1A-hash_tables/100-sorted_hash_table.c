#include "hash_tables.h"

/**
 * shash_table_create - function that create sorted hash table
 * @size: size of hash table
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_sorted_list_update - update
 *
 * @ht: sorted
 * @new_node: node
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int shash_sorted_list_update(shash_table_t **ht, shash_node_t **new_node,
		const char *key, const char *value)
{
	shash_node_t *old_head = NULL;

	old_head = (*ht)->shead;
	while (old_head)
	{
		if (strcmp(old_head->key, key) == 0)
		{
			free(old_head->value);
			old_head->value = (char *) strdup(value);
			free((*new_node)->key);
			free((*new_node)->value);
			free((*new_node));
			return (1);
		}
		old_head = old_head->snext;
	}
	return (0);
}

/**
 * shash_sorted_list_insert - insert
 *
 * @ht: sorted
 * @new_node: node
 * @key: key
 *
 * Return: 1 or 0
 */
int shash_sorted_list_insert(shash_table_t **ht, shash_node_t **new_node,
		const char *key)
{
	shash_node_t *old_head = NULL;

	old_head = (*ht)->shead;
	while (old_head)
	{
		if (strcmp(old_head->key, key) > 0)
		{
			(*new_node)->snext = old_head;
			(*new_node)->sprev = old_head->sprev;
			if (old_head->sprev != NULL)
				old_head->sprev->snext = *new_node;
			else
				(*ht)->shead = *new_node;
			old_head->sprev = *new_node;
			return (1);
		}
		old_head = old_head->snext;
	}
	(*new_node)->sprev = (*ht)->stail;
	(*ht)->stail->snext = *new_node;
	(*ht)->stail = *new_node;
	return (1);
}

/**
 * shash_insert_into_sorted_list - inserts into sorted list
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 if failure
 */
int shash_insert_into_sorted_list(shash_table_t *ht, const char *key,
		const char *value)
{
	shash_node_t *new_node = NULL;

	new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *) strdup(key);
	new_node->value = (char *) strdup(value);
	new_node->next = new_node->snext = new_node->sprev = NULL;
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	else
	{
		if (!shash_sorted_list_update(&ht, &new_node, key, value))
			return (shash_sorted_list_insert(&ht, &new_node, key));
		else
			return (1);
	}
}

/**
 * shash_insert_into_array - inserts into array
 *
 * Description: inserts into buckets
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 if failure
 */
int shash_insert_into_array(shash_table_t *ht, const char *key,
		const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_node = NULL, *old_head = NULL;

	new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_node->key = (char *) strdup(key);
	new_node->value = (char *) strdup(value);
	new_node->next = new_node->snext = new_node->sprev = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[index];
		while (old_head)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			old_head = old_head->next;
		}
		old_head = (ht->array)[index];
		new_node->next = old_head;
		(ht->array)[index] = new_node;
		return (1);
	}
}

/**
 * shash_table_set - short description
 *
 * Description: long description
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: return description
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	if (!shash_insert_into_array(ht, key, value))
		return (0);
	return (shash_insert_into_sorted_list(ht, key, value));
}


/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return: the value associated or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print the hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print in revers
 * @ht: hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - function that delete hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
