#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
* struct dog - prints the details of a dog
*
* @name: name of the dog
* @age: tells how old the dog is
* @owner: tell the name of the owner of the dog
* Return: no retur
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
