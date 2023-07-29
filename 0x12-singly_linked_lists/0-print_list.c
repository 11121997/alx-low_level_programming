#include "lists.h"

/**
*_strlen - function find length of string
*@s: string to check it's length
*Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s++)
		i++;
	return (i);
}

/**
*print_list - function that prints all the elements of a list_t list
*@h: pointer to first node
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
