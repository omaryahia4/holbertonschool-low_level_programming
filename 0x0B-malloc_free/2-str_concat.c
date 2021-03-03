#include "holberton.h"
#include <stdlib.h>
/**
**str_concat - concatenates two strings.
*@s1:string number 1
*@s2: string number 2
*Return: p
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		len1 = 0;
		while (s1[len1] != '\0')
		len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		len2 = 0;
		while (s2[len2] != '\0')
		len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++)
		p[len1 + j] = s2[j];
		p[len1 + len2] = '\0';
	return (p);
}
