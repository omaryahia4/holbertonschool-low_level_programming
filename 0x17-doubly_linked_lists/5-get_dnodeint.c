#include "lists.h"
/**
 **get_dnodeint_at_index - function that returns the nth node of a linked list.
 *@head: head of a linked list
 *@index: index node
 *Return: index node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	ptr = head;
	i = 0;
	while (i < index && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < index && ptr->next == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
