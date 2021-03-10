#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator - print an array
*@array: array of int
*@size: size of array
*@action : pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (action == NULL)
			return;
		(*action)(array[i]);
	}
}
