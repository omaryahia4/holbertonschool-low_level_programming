#include "holberton.h"

/**
 *_abs - make number abs
 *@n: the number in parameter
 * Return: abs n.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
