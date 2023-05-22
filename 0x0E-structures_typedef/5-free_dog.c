#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs
 * @d: The pointer
 * return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
