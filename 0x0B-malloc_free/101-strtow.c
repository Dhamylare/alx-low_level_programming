#include "main.h"
#include <stdlib.h>
/**
* grid_free - entry point
* @grid: input
* @height: input
*/
void grid_free(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}
/**
* strtow - splits string into two
* @str: the string to be splited
* Return: a pointer to the new allocated memory for the new string
*/
char **strtow(char *str)
{
	char **ptr;
	size_t c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
		ptr = malloc((height + 1) * sizeof(char *));
		}
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (ptr[i] == NULL)
				{
				grid_free(ptr, i);
				return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			ptr[i][j] = str[a1];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
