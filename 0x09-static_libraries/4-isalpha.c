#include "holberton.h"

/**
 *_isalpha - check if character c alpha or not with code ASCII
 *@c: the character to check
 * Return: alpha 1.
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
