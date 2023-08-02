#include "lists.h"

/**
*delete_nodeint_at_index - function that deletes the node at index
*@head: pointer to first node
*@index: index of node
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev->next = node;
		node = node->next;
	}
	return (-1);
}
