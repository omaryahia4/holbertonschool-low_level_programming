#include "holberton.h"

/**
 *_memset - fills the first n bytes of the memory area
 *@s: from parameter
 *@b: constant from parameter
 *@n: bytes from parameter
 * Return: success
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ch = s;

	for (i = 0; i < n; i++)
		ch[i] = b;

	return (ch);
}
