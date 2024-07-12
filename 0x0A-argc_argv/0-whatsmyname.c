#include <stdio.h>

/**
* main - function that prints its name followed by a new line
*
* @argc: command line arguments
* @argv: an array of command line arguments
* Return: (0) success
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
