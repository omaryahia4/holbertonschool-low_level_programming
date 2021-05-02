#include "lists.h"
/**
 **insert_dnodeint_at_index - function that inserts /
 *a new node at a given position.
 *@h: head node
 *@idx: index
 *@n: Data of node
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *h;
		*h = newNode;
		newNode->prev = NULL;
		return (newNode);
	}
	tmp = *h;
	while (tmp != NULL)
	{
		if (idx == i + 1)
		{
			newNode->n = n;
			newNode->next = tmp->next;
			tmp->next = newNode;
			newNode->prev = tmp->prev;
			return (newNode);
		}
		tmp = tmp->next;
		i++;
	}
	return (newNode);
}
