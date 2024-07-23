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
/**
* dog_t - giving struct dog a new name dog_t
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
