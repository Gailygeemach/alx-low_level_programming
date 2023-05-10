#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: number to be raised
 * @y: raising number
 * Return: If y is lower than 0 - return -1
 * Otherwise retun - NULL
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
