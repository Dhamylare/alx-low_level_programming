#include <stdio.h>
/**
*main - Entry point
*
*return: Always 0 (success)
*/

int main(void)
{
	char (c);
	int (i);
	long int (li);
	long long int (lli);
	float (f);

	printf("Size of a char is: %lubyte(s)\n", sizeof(c));
	printf("Size of an int is: %lubyte(s)\n", sizeof(i));
	printf("Size of a long int is: %lubyte(s)\n", sizeof(li));
	printf("Size of a long long int is: %lubyte(s)\n", sizeof(lli));
	printf("Size of a float is: %lubyte(s)\n", sizeof(f));
	return (0);
}
