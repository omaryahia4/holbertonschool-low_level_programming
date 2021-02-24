#include "holberton.h"
/**
*_puts_recursion - prints string
*@s: string to be printed
*@c: char
*Return : void
*/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	
}
