#include "function_pointers.h"
/**
* print_name - prints any name passed into it
*
* @name: name of the person
* @f: function pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
