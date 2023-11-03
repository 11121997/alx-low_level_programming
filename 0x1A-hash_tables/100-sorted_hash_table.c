#include "hash_tables.h"

/**
 * shash_table_create - function that create sorted hash table
 * @size: size of hash table
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int k;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		sht->array[k] = NULL;
	}
	return (sht);
}

/**
 * shash_table_set - function that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value associated
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int idx;
	char *val_cpy;

	if (ht == NULL || key == NULL || !*key || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_cpy;
			return (1);
		}
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(val_cpy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val_cpy);
		free(node);
		return (0);
	}
	node->value = val_cpy;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = node;
		else
			tmp->snext->sprev = node;
		tmp->snext = node;
	}

	return (1);
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
	unsigned long int idx;

	if (ht == NULL || key == NULL || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
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
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that delete hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int k;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (k = 0; k < ht->size; k++)
	{
		while (ht->array[k] != NULL)
		{
			tmp = ht->array[k]->next;
			free(ht->array[k]->key);
			free(ht->array[k]->value);
			free(ht->array[k]);
			ht->array[k] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
