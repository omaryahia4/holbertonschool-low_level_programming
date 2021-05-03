#include "holberton.h"

/**
 *_isdigit - check if caracter digit or not
 *@c: the caracter to check his status
 * Return: positive 1.
 * negative, 0 is returned.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
