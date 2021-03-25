#include "lists.h"
/**
 *add_node_end - print a new node at the end
 *@head:struct of type list_t;
 *@str: string
 *Return: nd
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	list_t *nd, *ptr;

	for (length = 0; str[length] != '\0'; length++)
		;
	nd = malloc(sizeof(list_t));
	if (nd == NULL)
		return (NULL);
	nd->str = strdup(str);
	nd->len = length;
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = nd;
	return (nd);
}
