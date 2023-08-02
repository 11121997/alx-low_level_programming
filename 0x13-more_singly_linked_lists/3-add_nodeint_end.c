#include "lists.h"

/**
**add_nodeint_end - function that adds a new node at the end
*@head: pointer to first node
*@n: integer
*Return: the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	new_node->next = NULL;
	new_node->n = n;

	if (!head || !new_node)
		return (NULL);
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
