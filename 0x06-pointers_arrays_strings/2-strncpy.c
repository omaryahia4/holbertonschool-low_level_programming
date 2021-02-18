#include "holberton.h"

/**
* _strncpy - Copy a string
* @dest: string
* @src: string
* @n: integer
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

		while (src[j])
		{
			j++;
		}

		while (i < n && src[i])
		{
			dest[i] = src[i];
			i++;
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}

	return (dest);
}
