#include "holberton.h"
/**
 * get_endianness - check endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
