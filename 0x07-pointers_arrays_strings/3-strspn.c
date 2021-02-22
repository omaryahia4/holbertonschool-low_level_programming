#include "holberton.h"
/**
 * *_strspn - strspn string
 *@s:string
 *@accept:string
 *Return:length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, a, b;
	
	b = 0;
	i = 0;
	while (s[i] != '\0' && s[i] != ' ')
		{
			a = 0;
			while (accept[a] != '\0')
				{
					if (s[i] == accept[a])
						{
							b = b + 1;
						}
					a++;
				}
			i++;
		}
	return (b);
}
