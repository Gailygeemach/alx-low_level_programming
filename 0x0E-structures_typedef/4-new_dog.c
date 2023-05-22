#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 * Return: The dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, lenY, lenZ;
	struct dog *n_dog = NULL;

	lenY = 0;
	while (name[lenY] != '\0')
		lenY++;
	lenZ = 0;
	while (owner[lenZ] != '\0')
		lenZ++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenY + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lenZ + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a <= lenY; a++)
		n_dog->name[a] = name[a];
	for (a = 0; a <= lenZ; a++)
		n_dog->owner[a] = owner[a];
	n_dog->age = age;
	return (n_dog);
}
