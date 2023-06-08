#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * get_bit - A function that returns the value of a
 * bit at a given index
 * @index: The index
 * @n: The bit value
 * Return: The value of the bit at the index otherwise return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
