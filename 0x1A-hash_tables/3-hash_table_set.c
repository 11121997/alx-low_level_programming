#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table
 * @key:is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val_cpy;
	unsigned long int idx, k;

	if (ht == NULL || key == NULL || !*key || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (k = idx; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = val_cpy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		free(val_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = val_cpy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
