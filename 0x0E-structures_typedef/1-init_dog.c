#include "dog.h"
/**
* init_dog - initialises struct dog
* @d: pointer to struct dog
* @name: pointer to name of dog
* @age: pointer to the dog's age
* @owner: pointer to dog's owner
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
