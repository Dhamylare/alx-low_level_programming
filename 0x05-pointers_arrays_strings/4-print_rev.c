#include "main.h"

/**
* print_rev - prints strings in reverse
* @s: string being printed
* Return: returns reversed string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
