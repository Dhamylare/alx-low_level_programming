#include <unistd.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (if successful)
*/
int main(void)
{
	 char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, str, sizeof(str) - 1);
	return (0);
}
