#include "holberton.h"

/**
 *_strlen - give lenght of string
 *@s: the pointer of string s
 * Return: success
 **/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		{
			i++;
		}
	return (i);
}
