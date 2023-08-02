#include "lists.h"

/**
**reverse_listint - function that reverses
*@head: pointer to first node
*Return: pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *next;

	if (!head || !*head)
		return (NULL);

	curr = *head;
	*head = NULL;
	next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = *head;
		*head = curr;
		curr = next;
	}
	return (*head);
}
