#include "holberton.h"
#include <stdlib.h>
/**
**create_array - create an array
*@size: number of variable
*@c: char
*Return: NULL or 0
*/
char *create_array(unsigned int size, char c)
{
	char *Array;
	unsigned int i;

	if (size == 0)

		return (NULL);
	Array = malloc(sizeof(c) * size);

	if (Array == NULL)

		return (0);

	for (i = 0; i <= size; i++)
	{
		Array[i] = c;
	}
		return (Array);
}
