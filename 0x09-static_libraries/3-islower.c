#include "holberton.h"

/**
 *_islower - check if character c lowecase or not with code ASCII
 *@c: the character to check
 * Return: lowercase 1.
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
