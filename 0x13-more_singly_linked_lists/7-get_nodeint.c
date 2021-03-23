#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a list
 *@head: pointer to head
 *@index: index of the node
 *Return: data of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	i = 0;
	while (i < index && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (ptr);
}
