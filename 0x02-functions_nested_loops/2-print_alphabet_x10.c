#include "main.h"
/**
* print_alphabet_x10 - function that print alphabet multiple times
* Return: retuns 0
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	i = 0;

	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}
