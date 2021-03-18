#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: pointer
* Return: number of nods
*/

size_t print_list(const list_t *h)
{
	unsigned int  i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
