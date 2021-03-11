#include "function_pointers.h"
#include <stdio.h>
/**
*int_index - print matching elements
*@array:array of int
*@size:num of elements
*@cmp:pointer of function
*Return:int_index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	return (-1);
}
