#include "holberton.h"

/**
 *_strncpy - copy string to another
 *@dest: the string from parameter
 *@src: the string from parameter
 *@n: number of caracter to cpy
 * Return: success
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (p);
}
