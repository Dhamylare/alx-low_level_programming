#include "main.h"

/**
 * _strcmp - compared two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: string to stdout
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
		return (0);
}
