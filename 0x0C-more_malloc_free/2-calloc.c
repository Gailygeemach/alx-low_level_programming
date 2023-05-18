#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory of an array
 * @nmemb: The number of elements of the array
 * @size: The bytes size of each element
 * Return: A pointer to the allocated memory, otherwise return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		str[x] = 0;
	return (str);
}
