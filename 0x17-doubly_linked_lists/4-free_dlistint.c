#include "lists.h"
/**
 * free_dlistint - frees a linked list
 *@head: head of a linked list
 *Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *store;

	ptr = head;
	while (ptr != NULL)
	{
		store = ptr->next;
		free(ptr);
		ptr = store;
	}
}
