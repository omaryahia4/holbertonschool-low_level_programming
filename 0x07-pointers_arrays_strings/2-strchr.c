#include "holberton.h"
/**
**_strchr -  locates a character in a string.
*@s: string
*@c: character
*Return: char or NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
		{
			return (s);
		}

	return (0);
}
