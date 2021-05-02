#include "lists.h"
/**
 **add_dnodeint_end - add new node at the end of a doubly linked list
 *@head: head of a doubly linked list
 *@n: data
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ptr;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	newnode->next = NULL;
	newnode->prev = ptr;
	ptr->next = newnode;
	}
return (newnode);
}
