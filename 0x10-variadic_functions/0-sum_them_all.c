#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - A function that returns sum of all its parameters
 * @n: The number of arguments
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (y = 0; y < n; y++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
