#include "main.h"
/**
* prime_n - determine prime number
* @a: input number
* @b: determinant value
* Return: 1 if not prime number
*/

int prime_n(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_n(a, b + 1));
}

/**
* is_prime_number - function that detect prime number
* @n: the input number
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
