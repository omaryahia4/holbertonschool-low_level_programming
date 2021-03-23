#include "lists.h"
/**
 **add_nodeint - function that adds new node to a list.
 *@head: pointer of the beginning of node
 *@n: integer
 *Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	if (head == NULL)
		return (NULL);
	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = *head;
	*head = nd;
	return (*head);
}
