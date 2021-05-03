#include "holberton.h"

/**
 *_strcat - concat 2 string
 *@dest: the string from parameter
 *@src: the string from parameter
 * Return: success
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0, j;
	char *p = dest;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' ; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (p);
}
