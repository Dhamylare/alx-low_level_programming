#include "main.h"

/**
* _pow_recursion - function that prints the value of x to the power of y
* @x: base value
* @y: superscript
* Return: return result
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		--y;
	return (_pow_recursion(x, y) * x);

}
