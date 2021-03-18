#include "lists.h"
/**
 * list_len - function that returns  the number of elements in a linked list
 * @h: pointer
 * Return: number of elements in a linked list
 */
 size_t list_len(const list_t *h)
{
	int i;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
	 
}