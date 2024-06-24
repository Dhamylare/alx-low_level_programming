#include <stdio.h>
/**
* main - Entry point of the program
* Prgram that prints all numbers in base16
* Return: Always 0 (sucees)
*/
int main(void)
{
	int d;
	char h;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
