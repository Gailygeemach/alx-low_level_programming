#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: The pointer
 * Return: The converted number otherwise return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	k = 0;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		k = k << 1;
		if  (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			k = k | 1;
		b++;
	}
	return (k);
}
