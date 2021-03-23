#include "lists.h"
/**
*free_listint - free the listint_t list
*@head: pointer if first node
*/
void free_listint(listint_t *head)
{
	listint_t *count;

	while (head != NULL)
	{
		count = head;
		head = count->next;
		free(count);
	}
}
