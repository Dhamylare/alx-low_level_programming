#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - addition operation
* @a: first parameter
* @b: second parameter
*
* Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtration
* @a: first value
* @b: second value
*
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply operation
* @a: first argument
* @b: second argument
*
* Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division operation
* @a: first parameter
* @b: second parameter
*
* Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - mod operation
* @a: first parameter
* @b: second parameter
*
* Return: return mod a&b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
