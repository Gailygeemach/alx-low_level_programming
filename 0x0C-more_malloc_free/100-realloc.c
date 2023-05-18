#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: The pointer
 * @old_size: The old size
 * @new_size: The new size
 * Return: A pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *relloc;
	unsigned int x;

	if (ptr != NULL)
		mem = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
		return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (x = 0; x < (old_size || x < new_size); x++)
	{
		*(relloc + x) = mem[x];
	}
	free(ptr);
	return (relloc);
}
