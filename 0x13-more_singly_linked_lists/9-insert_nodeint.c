#include "lists.h"

/**
**insert_nodeint_at_index - function that inserts a new node
*@head: pointer to first node
*@idx: index of the node
*@n: integer value
*Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp;
	unsigned int i;

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
