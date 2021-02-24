#include "holberton.h"
/**
*factorial - factorial of a given number
*@n: int
*Return: res
*/
int factorial(int n)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (n < 0)
	{
		return (-1);
	}
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
