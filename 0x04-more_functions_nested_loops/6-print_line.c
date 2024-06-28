#include "main.h"
/**
* print_line - prints a straight line on the screen
* @n: number of times the _ is printed
* Return: reurns result
*/

void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
