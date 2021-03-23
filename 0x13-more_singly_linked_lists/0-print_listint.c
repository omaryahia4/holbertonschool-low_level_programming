#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list.
*@h: list to print
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h == NULL)
		{
			return (-1);
			h = h->next;
			i++;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
