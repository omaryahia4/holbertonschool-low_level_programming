#include "holberton.h"
/**
* _strcmp - compare strings
*@s1: pointer to string 1
*@s2: pointer to string 2
*Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

		while (s1[i])
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
				i++;
		}
	return (0);
}
