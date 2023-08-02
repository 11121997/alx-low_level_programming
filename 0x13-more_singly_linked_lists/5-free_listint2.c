#include "lists.h"

/**
*free_listint2 - function that frees
*@head: pointer to first node
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;
	node = temp = *head;

	if (!head)
		return;

	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
