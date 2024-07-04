#include "main.h"

/**
 * reverse_array - function that reverse an array
 * @a: array of integers
 * @n: size of array
 *
 * Return: int to stdout
 */

void reverse_array(int *a, int n)
{

	int i, rev;

	i = 0;
	rev = 0;

	n -= 1;

	while (i <= n)
	{
		rev = a[n];
		a[n--] = a[i];
		a[i++] = rev;
	}
}
