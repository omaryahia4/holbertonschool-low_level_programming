#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - free an array
*@grid: grid of integers
*@height: height of grid 
*Return: 0
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]); /*first we free the content of the grid*/
	free(grid); /*then we free the entire grid*/
}
