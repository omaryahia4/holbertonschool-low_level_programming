#include "lists.h"
/**
 *delete_nodeint_at_index - delete a node list at the index
 *@head:pointer of type list_t;
 *@index:unsigned int;
 *Return: either 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *count, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		count = *head;
		*head = (*head)->next;
		free(count);
		return (1);
	}
	tmp = (*head);
	while (i < index && tmp->next != NULL)
	{
		count = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i < index)
		return (-1);
	count->next = tmp->next;
	free(tmp);
	return (1);
}
