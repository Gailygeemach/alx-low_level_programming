#include "main.h"
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @i: same number as n
 * @y: number that iterates from 1 to n
 * Return: 1 on success
 * on error, returns -1 and errno is set approximately
 */
int prime2(int i, int y)
{
	if (i == y)
		return (1);
	else if (i % y == 0)
		return (0);
	return (prime2(i, y + 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: integer
 * Return: 1 on success
 * On error, -1 is returned, and errno is set approximately
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
