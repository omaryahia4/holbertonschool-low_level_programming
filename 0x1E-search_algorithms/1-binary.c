#include "search_algos.h"
/**
 *binary_search - Binary search algorithm function
 *@array: a pointer to the first element of the array to search in
 *@size:  the number of elements in array
 *@value: the value to search for
 *Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, half, left = 0, right = size - 1;

	if (array != NULL)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%i\n", array[right]);
			half = (right + left) / 2;
			if (array[half] < value)
			{
				left = half + 1;
			}
			else if (array[half] > value)
			{
				right = half - 1;
			}
			else
			{
				return (half);
			}
		}
	}
	return (-1);
}
