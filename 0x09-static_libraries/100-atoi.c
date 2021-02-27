#include "holberton.h"

/**
 *_atoi - convert string to int
 *@s: the string to convert
 * Return: success
 **/

int _atoi(char *s)
{
	int nbr = 0;
	int j = 0, sm = -1;

	while (((s[j] < '0') || (s[j] > '9')) && (s[j] != '\0'))
	{
		if (s[j] == '-')
			sm *= -1;
			j++;
	}

	while (((s[j] >= '0') && (s[j] <= '9')) && (s[j] != '\0'))
	{
		nbr = (nbr * 10) - (s[j] - '0');
		j++;
	}

	return (nbr * sm);
}
