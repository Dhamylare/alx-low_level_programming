#include <stdio.h>
/**
* main - prints number of arguments passed to it.
*
* @argc: command line argument
* @argv: an array of the command line arguments
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
