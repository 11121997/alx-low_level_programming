#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (k = 0; k < ht->size; k++)
	{
		while (ht->array[k] != NULL)
		{
			node = ht->array[k]->next;
			free(ht->array[k]->key);
			free(ht->array[k]->value);
			free(ht->array[k]);
			ht->array[k] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
