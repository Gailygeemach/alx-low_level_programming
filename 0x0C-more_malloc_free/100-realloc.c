#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates a memory block using
 * malloc and free
 * @ptr: A pointer to the previously allocated memory
 * @old_size - The size of the allocated space for ptr
 * @new_size - The size for the new memory block
 * Return: if new_size == old_size return ptr
 * If new_size == 0 and ptr is not NULL, return NULL
 * Otherwise return pointer to the reallocated memory block 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;
	for (x = 0; x < old_size && x < new_size; x++)
		filler[x] = *ptr_copy++;
	free(ptr);
	return (mem);
}
