#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - function that returns  the number of elements in a linked list
 * @h: pointer
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
