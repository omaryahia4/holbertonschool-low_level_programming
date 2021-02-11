#include "holberton.h"

/**
* _isupper - prints alphabets in uppercase.
*@c: character
* Return: 1 if uppercase, 0 if else.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
