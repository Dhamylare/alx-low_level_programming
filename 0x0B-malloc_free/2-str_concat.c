#include "main.h"
#include <stdlib.h>
/**
* *str_concat - concatenate two strings
* @s1: first string
* @s2: second string
* Return: return pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int lens1, lens2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = 0;
	while (s1[lens1] != '\0')
	{
		lens1++;
	}
	lens2 = 0;
	while (s2[lens2] != '\0')
	{
		lens2++;
	}
	ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= lens2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);

}
