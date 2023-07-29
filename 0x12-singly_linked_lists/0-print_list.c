#include "lists.h"

/**
*_strlen - function find length of string
*@s: pointer to string
*Return: i
*/
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
*print_list - function that prints all the elements
*@h: pointer to first node
*Return: i
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
