#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: bits being searched
* @index: index of the bit to get
* Return: the value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, output;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	output = n & div;
	if (output == div)
		return (1);

	return (0);
}
