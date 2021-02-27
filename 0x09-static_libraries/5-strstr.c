#include "holberton.h"
#include <stdio.h>

/**
 *_strstr - function finds the first occurrence of a substring
 *@haystack: string from parameter
 *@needle: string from parameter
 * Return: success
 **/

char *_strstr(char *haystack, char *needle)
{

	int i;

	if (needle[0] != '\0')
	{
		while (*haystack != '\0')
		{
			haystack++;
				if (*haystack == needle[0])
				{
					i = 0;
						while (needle[i] != '\0' && haystack[i] != '\0' && haystack[i] == needle[i])
						{
							i++;
						}
							if (needle[i] == '\0')
							{
								return (haystack);
							}

				}
		}
	}
	return (NULL);
}
