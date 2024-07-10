#include "main.h"

/**
* natural_sqrt - return natural sqrt of number
* @a: input number
* @b: iterator
* Return: sdqrt or -1
*/

int natural_sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (natural_sqrt(a, b + 1));
}


/**
* _sqrt_recursion - function prints value of square root of numbers
* @n: number whose sqrt is being finf
* Return: return the sqrt
*/

int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 0));

}
