#include "main.h"

/**
 * _strncat - function that concatenates two strings using n bytes from src
 *
 * @dest: the output  dest
 * @src: the input src
 * @n: the number of bytes from src
 *
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
