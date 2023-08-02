#include "lists.h"

/**
**insert_nodeint_at_index - function that inserts a new node
*@head: pointer to first node
*@idx: the index of the list
*@n: integer data
*Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode = malloc(sizeof(listint_t));
	int i;

	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	node = *head;
	for (i = 0; i < idx - 1 && node->next != NULL; i++)
	{
		node = node->next;
	}
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
}
