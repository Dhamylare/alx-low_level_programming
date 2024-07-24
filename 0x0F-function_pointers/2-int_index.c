#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array to searched for integer
  * @size: size of the array
  * @cmp: compare function
  *
  * Return: an int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);

			}
		}
	}

	return (-1);
}
