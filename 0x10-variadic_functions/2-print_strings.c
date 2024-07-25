#include "variadic_functions.h"

/**
* print_strings - prints all strings parsed
* @separator: string printed between the strings.
* @n: number of strings parsed
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			 printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
