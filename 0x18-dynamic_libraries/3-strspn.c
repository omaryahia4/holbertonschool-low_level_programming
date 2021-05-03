#include "holberton.h"
#include <stdio.h>

/**
 *_strspn - Returns the number of bytes in the initial segment
 *@s: string from parameter
 *@accept: string from parameter
 * Return: success
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i, j = 0;

	if ((s == NULL) || (accept == NULL))
		return (l);

	for (i = 0; accept[i] != '\0'; i++)
	{
		while (s[j] != ' ' && s[j] != ',' && s[j] != '\0')
		{
			if (s[j] == accept[i])
				l++;
				j++;
		}
			j = 0;
	}

	return (l);
}
