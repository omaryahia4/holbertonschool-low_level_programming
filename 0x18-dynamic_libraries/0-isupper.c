#include "holberton.h"

/**
 *_isupper - check if caracter uppercase or not
 *@c: the caracter to check his status
 * Return: positive 1.
 * negative, 0 is returned.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
