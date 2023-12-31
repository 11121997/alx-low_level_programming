#include "lists.h"

/**
 * sum_dlistint - function that returns
 * the sum of all the data of a linked list
 * @head: head node
 * Return: sum of all the data or 0 if it's empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
