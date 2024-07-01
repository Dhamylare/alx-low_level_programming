#include "main.h"
/**
* swap_int - swaps the values of two variable
* @a: first integer
* @b: second integer
* return: returns void
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;

}
