#include "main.h"

/**
* print_array - prints array of integers
* @a: poiter
* @n: size of array
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(",");
	}
	}
		printf("\n");
}
