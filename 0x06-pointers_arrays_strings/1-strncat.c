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
	int index, cnt;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (cnt = 0; cnt < n && src[cnt] != '\0'; cnt++)
	{
		dest[index] = src[cnt];
		index++;
	}
	if (cnt < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
