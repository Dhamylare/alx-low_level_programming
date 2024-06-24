#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int c;
	int d;
	
	for(c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for(d = 65; d <= 96; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
