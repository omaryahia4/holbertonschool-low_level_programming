#include "lists.h"
/**
 * pop_listint - unction that deletes the head node
 * @head: pointer to pointer
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *count;

	while (*head != NULL)
	{
		count = *head;
		*head = count->next;
		n = count->n;
		free(count);
	}
	return (n);
}
