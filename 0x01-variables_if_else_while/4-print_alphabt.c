#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
