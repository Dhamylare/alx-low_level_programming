#include <stdio.h>
/**
* main - Entry point of the program
* A program that prints  numbers from 0 to 9 separated by comma
* Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
