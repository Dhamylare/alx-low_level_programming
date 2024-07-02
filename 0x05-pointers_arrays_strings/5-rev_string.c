#include "main.h"

/**
* rev_string - funtion prints strings in reverse
* @s: string being reversed
* Return: return string
*/

void rev_string(char *s)
{
	int l = 0, i = 0;
	int rev;

	while (s[i++])
	{
		l++;
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		rev = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = rev;
	}

}
