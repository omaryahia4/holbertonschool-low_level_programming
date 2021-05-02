#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)/
 of a dlistint_t linked list.
 *@head: head of node
 *Return: Sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr)
	{
	sum = sum + ptr->n;
	ptr = ptr->next;
	}
	return (sum);
}
