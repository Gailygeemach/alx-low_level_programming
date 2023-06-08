#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * clear_bit - A function that clears the value of a bit
 * at a given index
 * @index: The index
 * @n: The number to input
 * Return: 1 otherwise return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int  x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	if (*n & x)
		*n ^= x;
	return (1);
}
