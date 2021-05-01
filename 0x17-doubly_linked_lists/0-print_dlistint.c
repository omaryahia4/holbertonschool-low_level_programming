#include "lists.h"
/**
 *print_dlistint - print all elements of doubly linked list
 *@h: node
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
