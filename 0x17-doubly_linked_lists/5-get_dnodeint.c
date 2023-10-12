#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: first node
 * @index: index of the node
 * Return: address of the node or null in failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
