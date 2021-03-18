#include "lists.h"
/**
 * list_len - function that returns  the number of elements in a linked list
 * @h: pointer
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
