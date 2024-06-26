#include "main.h"
/**
* _abs - The function that prints absolute
* @a: absolute value
* Return: return 0
*/

int _abs(int a)
{

	if (a < 0)
	{
	int abs_val;

	abs_val = a * -1;
	return (abs_val);
	}
	return (a);

}
