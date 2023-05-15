#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char
 * @c: The char to assign
 * @size: The size of  array
 * Return: A pointer to the array, otherwise return 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
		str[t] = c;
	return (str);
}

