#include "lists.h"
/**
 **insert_dnodeint_at_index - function that inserts /
 *a new node at a given position.
 *@h: head node
 *@idx: index
 *@n: int
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp;
	int i = 0;

	newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *h;
		*h = newNode;
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
			return (newNode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
