#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of my program
* @ac: arguments count
* @av: argument vector
* Return: pointer to a new string or NULL if fails
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, x = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		if (ptr[x] == '\0')
		{
			ptr[x++] = '\n';
		}
	}
	return (ptr);

}
