#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The pointer to be allocated
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
