#include "lists.h"
/**
  * add_nodeint_end - add a new node at the end of listint_t list
  * @head: pointer of the first node
  * @n: data
  * Return: pointer to the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd;
	listint_t *count;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}
	count = *head;
	while (count->next != NULL)
	{
		count = count->next;
	}
	count->next = nd;
	return (nd);
}
