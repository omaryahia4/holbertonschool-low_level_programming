#include "holberton.h"

/**
* print_line - prints straight line n times.
* @n: line.
* Return: 0.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	_putchar('\n');
}
