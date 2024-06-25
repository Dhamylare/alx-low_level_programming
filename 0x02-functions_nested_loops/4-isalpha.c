#include "main.h"
/**
* _isalpha - check if is alphabet
* @c: variable being checked for case
* Return: 1 if lower or 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
		return (0);



}
