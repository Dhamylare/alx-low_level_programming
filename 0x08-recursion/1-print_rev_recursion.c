#include "main.h"

/**
* _print_rev_recursion - function that prints string in reverse
* @s: the string being reversed
* Return: returns the reversed string
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}
