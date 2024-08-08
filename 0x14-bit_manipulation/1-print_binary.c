#include "main.h"

/**
* _exponent - calculate (base and power)
* @base: base of the exponent
* @pow: power of the exponent
* Return: value of base and power
*/
unsigned long int _exponent(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
* print_binary - prints the binary representation of a number
* @n: number to be printed
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int dev, output;
	char flag;

	flag = 0;
	dev = _exponent(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		output = n & dev;
		if (output == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
