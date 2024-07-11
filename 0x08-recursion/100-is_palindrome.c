#include "main.h"
/**
* _strlen_recursion - to get the string length
* @s: the string
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
/**
* compare_str - compare each character of string
* @s: string
* @start: first comparator
* @end: last comparator
* Return: int
*/

int compare_str(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || end == start + 1)
			return (1);
		return (0 + compare_str(s, start + 1, end - 1));
	}
	return (0);
}

/**
* is_palindrome - function that determines if a string is palindrome
* @s: the string being checked
* Return: 0 or 1
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, _strlen_recursion(s) - 1));
}
