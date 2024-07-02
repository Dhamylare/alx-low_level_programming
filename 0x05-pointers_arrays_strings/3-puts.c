#include "main.h"

/**
* _puts - prints a string followed by newline to stdout
* @str: the string
* Return: Always non negative value for success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
