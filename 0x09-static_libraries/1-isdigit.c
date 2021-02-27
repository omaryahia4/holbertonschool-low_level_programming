#include "holberton.h"

/**
 * _isdigit - checks for digit (0 through 9).
 *@c: integer
 * Return: 1 if c is digit else return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{
			return (1);
		}
	else
		{
			return (0);
		}
}
