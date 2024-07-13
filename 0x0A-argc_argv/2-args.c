#include <stdio.h>
/**
* main - prints all arguments passed into it
* @argc: command line arguments
* @argv: array of command line arguments
* Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
