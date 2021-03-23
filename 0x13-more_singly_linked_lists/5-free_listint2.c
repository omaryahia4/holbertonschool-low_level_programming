#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to pointer
 * Return: 0
 */
 void free_listint2(listint_t **head)
 {
 listint_t *count;

	while (*head != NULL)
	{
		count = *head;
		*head = count->next;
		free(count);
	}
    head = NULL;
 }
 