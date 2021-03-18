#include "lists.h"

/**
 * add_node - function that adds new node
 * @head: header pointer
 * @str: string value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *nod;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	nod = malloc(sizeof(list_t));
	if (nod == NULL)
	{
		return (NULL);
	}
	nod->len = i;
	nod->str = strdup(str);
	nod->next = *head;
	*head = nod;
	return (nod);
}
