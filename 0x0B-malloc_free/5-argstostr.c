#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - seperate arguments
*@ac: number of arguments.
*@av: arguments.
*Return: p
*/
char *argstostr(int ac, char **av)
{
	int length, i, j, c;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}
	p = malloc((length + ac + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[c] = av[i][j];
			c++;
		}
			p[c] = '\n';
			c++;
		}
	p[c] = '\0';
	return (p);
}
