#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to a pointer
* @idx: takes in the index
* @n: takes in an integer
* Return: NULL if function fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *tmp;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		return (NULL);
		newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (idx == i + 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
