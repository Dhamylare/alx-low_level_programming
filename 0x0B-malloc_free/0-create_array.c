#include "main.h"
#include <stdlib.h>
/**
* create_array - create an empty array of characters
* @size: size of the array
* @c: output strings
*
* Return: return a pointer or null if failed
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);

}
