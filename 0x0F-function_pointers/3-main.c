#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point of the program
  * @argc: command line argument
  * @argv: array of the arguments
  *
  * Return: returns 0 when success
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
