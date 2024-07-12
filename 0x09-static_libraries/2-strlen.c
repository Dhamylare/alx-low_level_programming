#include "main.h"

/**
*  _strlen - prints the length of a string
* @s: the string whose length is being determined
* Return: returns the length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);

}
