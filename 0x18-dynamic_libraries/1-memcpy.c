#include "holberton.h"

/**
 *_memcpy - copies bytes from memory area to another memory area
 *@dest: pointer from parameter
 *@src: pointer from parameter
 *@n: bytes from parameter
 * Return: success
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ch = dest;
	char *s = src;

	for (i = 0; i < n; i++)
		ch[i] = s[i];

	return (ch);
}
