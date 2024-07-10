#include "main.h"

/**
* _strlen_recursion - function prints the string length using resursion
* @s: the string whose length is being find
* Return: returns the strlen
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);

}
