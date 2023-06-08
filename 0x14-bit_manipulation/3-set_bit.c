#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * set_bit - A function that sets the value of a bit to 1
 * at a given index
 * @index: The index
 * @n: The number
 * Return: 1 otherwise return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int curr;

	if (index > 63)
		return (-1);
	curr = 1 << index;
	*n = *n | curr;
	return (1);
}
