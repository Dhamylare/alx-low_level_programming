#include "main.h"

/**
* print_last_digit - Prints last digit
* @r: the last digit
* Return: Returns the last digit
*/

int print_last_digit(int r)
{
	int last;

	last = r % 10;
	if (last < 0)
	{
		last = last * -1;
	}
		_putchar(last + '0');
		return (last);

}
