#include "main.h"

/**
* factorial - prints the factorial of a given number
* @n: the given number
* Return: return -1 to show error
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
	if (n < 0)
		return (-1);
	}
	return (n * factorial(n - 1));

}
