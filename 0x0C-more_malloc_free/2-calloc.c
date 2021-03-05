#include "holberton.h"
#include <stdlib.h>
/**
* *_calloc - create an array
*@nmemb:number of elements
*@size:size of elements
*Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0; /* Because with calloc The memory is always set to zero*/
	}
	return (p);
}
