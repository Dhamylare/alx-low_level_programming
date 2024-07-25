#include "variadic_functions.h"

/**
* print_numbers - prints all numbers of arguments parsed
* @separator: string to be printed between numbers
* @n: number of required arguments
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
