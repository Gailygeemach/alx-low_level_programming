#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: If big endian return 0, otherwise return 1
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *s;

	s = (char *) &y;
	return ((int)*s);
}
