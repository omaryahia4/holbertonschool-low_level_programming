#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked list
 *@h: node
 *Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
