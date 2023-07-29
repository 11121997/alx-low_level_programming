#include "lists.h"

/**
**add_node_end - function that adds a new node at the end
*@head: first node
*@str: string
*Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_end)
		return (NULL);
	if (str)
	{
		new_end->str = strdup(str);
		if (!new_end->str)
		{
			free(new_end);
			return (NULL);
		}
		new_end->len = _strlen(new_end->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_end;
	}
	else
		*head = new_end;
	return (new_end);
}
