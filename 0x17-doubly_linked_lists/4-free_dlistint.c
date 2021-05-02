#include "lists.h"
/**
 * free_dlistint - frees a linked list
 *@head: head of a linked list
 *Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		ptr->next = NULL;
	}
	free(ptr);
}
