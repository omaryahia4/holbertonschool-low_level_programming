#include "holberton.h"
/**
**_strstr -  locates a substring.
*@haystack: string
*@needle: string
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i++])
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				i++;
				j++;
			}
			else
			{
				;
			}
		}
	}
		return (0);
}
