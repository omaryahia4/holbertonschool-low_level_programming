#include "holberton.h"
#include <stdio.h>

/**
 *_strchr - Returns the first occurrence of a character
 *@s: string from parameter
 *@c: caracter from parameter
 * Return: success
 **/

char *_strchr(char *s, char c)
{
	int oc = 0, i = 0, j = 0;
	char *p = NULL;

	while (s[j] != '\0')
		{
			j++;
		}

	while ((oc == 0) && (i <= j))
		{
			if (s[i] == c)
				{
					oc = 1;
					p = &s[i];
				}
			i++;
		}
	return (p);
}
