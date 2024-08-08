#include "main.h"


/**
* flip_bits - returns the number of bits to flip to get from
*	one number to another
* @n: the first number
* @m: the second number
* Return: the number of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, output;
	unsigned int j, i;

	j = 0;
	output = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (output == (diff & output))
			j++;
		output <<= 1;
	}

	return (j);
}
