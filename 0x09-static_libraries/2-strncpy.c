#include "main.h"

/**
* _strncpy - function that copies string and works like stncpy
* @dest: output string
* @src: the string to be copied
* @n: the size of the string
* Return: it returns dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
