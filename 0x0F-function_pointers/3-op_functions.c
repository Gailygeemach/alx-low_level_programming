#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - A function that adds two numbers
 * @a: The first number
 * @b: The second number
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - A function that subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - A function that multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: Integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - A function that divides two numbers
 * @a: the first number
 * @b: the second number
 * Return: Integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a function that calculates module of two numbers
 * @a: The first number
 * @b: the second number
 * Return: Integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
