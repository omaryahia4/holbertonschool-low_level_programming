#include "holberton.h"
#include <stdlib.h>
/**
* *string_nconcat - concatenate 2 strings
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
		s1 = ""; /*empty string*/
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	if (s2 == NULL)
		s2 = ""; /*empty string*/
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2; /*using the entire s2*/
	str = malloc(sizeof(char) * (len1 + len2 + 1)); /* +1 array for the '\0'*/
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[len1 + j] = s2[j];
	str[len1 + len2] = '\0';
	return (str);
}
