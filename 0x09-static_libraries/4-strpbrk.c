#include "holberton.h"
#include <stdio.h>

/**
 *_strpbrk - function locates the first occurrence in the string
 *@s: string from parameter
 *@accept: string from parameter
 * Return: success
 **/

char *_strpbrk(char *s, char *accept)
{
	int oc = 0, i = 0, j;
	char *p = NULL;

	while (s[i] != '\0' && oc == 0)
		{
			for (j = 0; accept[j] != '\0'; j++)
				{
					if (s[i] == accept[j])
						{
							oc = 1;
							p = &s[i];
							break;
						}
				}
			i++;
		}

	return (p);

}
