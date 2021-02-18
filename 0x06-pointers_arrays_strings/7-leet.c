#include "holberton.h"
/**
* leet - leet the string
*@str:string
*Return:str
*/
char *leet(char *str)
{
	int i, j;
	char ch1[5] = {'a', 'e', 'o', 't', 'l'};
	char ch2[5] = {'A', 'E', 'O', 'T', 'L'};
	char ch3[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
		{
		for (j = 0; j < 5; j++)
			{
			if (str[i] == ch1[j] || str[i] == ch2[j])
				str[i] = ch3[j];
			}
			i++;
		}
	return (str);
}
