#include "holberton.h"

/**
 *_strncat - concat 2 string
 *@dest: the string from parameter
 *@src: the string from parameter
 *@n: number of caracter to concat
 * Return: success
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;
	char *p = dest;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (p);
}
