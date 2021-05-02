#include "lists.h"
/**
 * *add_dnodeint - add new node
 *@head: head of linked list
 *@n: Data
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	}
return (newnode);
}
