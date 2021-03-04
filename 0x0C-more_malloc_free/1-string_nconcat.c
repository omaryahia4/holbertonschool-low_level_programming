#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenate 2 strings
*@s1: string of chars 1
*@s2: string of chars 2
*@n:unsigned int
*Return: str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	if (s1 == NULL)
		i = 0;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	if (s2 == NULL)
		j = 0;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[len1 + j] = s2[j];
	str[len1 + n] = '\0';
	return (str);
}
