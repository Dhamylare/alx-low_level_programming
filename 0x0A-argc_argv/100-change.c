#include <stdio.h>
#include <stdlib.h>
/**
* main - prints minimum amount of coin for change
* @argc: command line argument
* @argv: an array of the command line arguments
* Return: 0 when successful
*/

int main(int argc, char *argv[])
{
	int cents, mincoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);

	return (0);
}
