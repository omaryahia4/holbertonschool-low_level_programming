#include "holberton.h"
#include <stdlib.h>
/**
**_strdup - copy string
*@str: string
*Return: str or NULL
*/
char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len + 1; i++)
	{
		array[i] = str[i];
	}
	
	return (array);
}
