#include "holberton.h"
/**
* _abs - computing the absolute value of an integer. .
* @int : integer
* Return: Always 0.
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * (-1));
}
}
