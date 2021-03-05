#include "holberton.h"
#include <stdlib.h>
/**
* *array_range - range an array
*@max:integer
*@min:integer
*Return: p
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
