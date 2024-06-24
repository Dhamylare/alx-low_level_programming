#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int b, c;

	for (b = 0; b <= 8; b++)
	{
	for (c = b + 1; c <= 9; c++)
	{
		putchar(b + '0');
		putchar(c + '0');
	if (!(b == 8 && c == 9))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
