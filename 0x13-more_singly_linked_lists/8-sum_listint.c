#include "lists.h"

/**
*sum_listint - function that returns the sum
*@head: pointer to first node
*Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
