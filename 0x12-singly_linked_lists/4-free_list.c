#include "lists.h"
/**
 *free_list - free the list
 *@head:struct of type list_t;
 *Return: 0
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
