#include <stdio.h>
#include "main.h"
/**
* main - Entry point of the program
* Description: prints numbers fizzbuzz numbers 1 to 100
* Fizz: print fizz for multiple of 3
* Buzz: Buzz for multiple of 5
* FIZZBUZZ: for multiple of both 3&5.
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
	if (i < 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
