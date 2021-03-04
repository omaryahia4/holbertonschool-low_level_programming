#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - create an array of integers
*@width:integer
*@height:integer
*Return: 0
*/
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(array[k]);
				free(array);
				return (NULL);
		}
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	return (array);
}
