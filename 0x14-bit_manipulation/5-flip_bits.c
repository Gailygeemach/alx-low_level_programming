#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * flip_bits - A function that returns the number of bits you
 * would need to get from one number vto another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}
	return (x);
}
