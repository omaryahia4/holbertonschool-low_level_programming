#include "holberton.h"
#include <stdlib.h>
/**
**malloc_checked - allocates memory.
*@b: number of bytes.
*Return: 98, if malloc fails
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)

		exit(98);

	return (p);
}
