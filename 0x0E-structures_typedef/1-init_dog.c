#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: The pointer 
 * @name: The name
 * @age: The age
 * @owner: The owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
