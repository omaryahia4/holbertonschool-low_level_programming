#include "holberton.h"
/**
* swap_int - swap integers.
*@a: integer
*@b: integer
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
