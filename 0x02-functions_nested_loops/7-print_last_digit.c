#include "holberton.h"
/**
*print_last_digit - Prints last digit.
*@n: integer
*Return: Always 0.
*/
int print_last_digit(int n)
	{
	int b;

	b = (n % 10);
	if (b < 0)
	{
	b = -b;
	}
	_putchar(b + '0');
	return (b);
	}
