#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned long int k;

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);
	h_t->size = size;
	h_t->array = malloc(sizeof(hash_table_t *) * size);
	if (h_t->array == NULL)
	{
		free(h_t);
		return (NULL);
	}
	for (k = 0; k < size; k++)
		h_t->array[k] = NULL;
	return (h_t);
}
