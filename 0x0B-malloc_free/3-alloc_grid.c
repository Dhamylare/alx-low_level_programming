#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - function that return a pointer to two dimensional array
*
* @width: width of the array
* @height: height of the array
* Return: return a pointer to an array of int..
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(grid);
			free(grid[i]);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
