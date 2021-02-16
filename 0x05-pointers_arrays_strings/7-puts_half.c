#include "holberton.h"
/**
* puts_half - puts the half of string
*@str:string
* Return: length
*/
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
		if (i % 2 == 0)
		{
			j = i;
			i = (i / 2);
				while (i < j)
				{
					_putchar(str[i]);
					i++;
				}
		}
		else
		{
			j = i;
			i = i / 2 + 1;
				while (i < j)
				{
					_putchar(str[i]);
					i++;
				}
		}
	_putchar('\n');
}
