#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two numbers
* @argc: number of command line arguments
* @argv: an array of command line arguments
* Return: return error or 1
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

