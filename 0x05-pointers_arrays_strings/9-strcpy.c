#include "main.h"

/**
* _strcpy - copies pointed string
* @dest: pointer address to be returned
* @src: the source pointer
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i++] = '\0';
	return (dest);

}
