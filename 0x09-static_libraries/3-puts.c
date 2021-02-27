#include "holberton.h"

/**
 *_puts - print string str
 *@str: the string from parameter
 * Return: success
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	_putchar('\n');
}
