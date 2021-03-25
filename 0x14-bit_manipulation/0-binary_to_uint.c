#include "holberton.h"
/**
 * binary_to_uint - convert binary into unsigned integer
 * @b: pointer of string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int integer = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		integer = integer << 1;
		if (b[i] == '1')
			integer = integer ^ 1;
		i++;
	}
	return (integer);
}
