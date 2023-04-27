#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1
 *  and 2, followed by a new line
 *  Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);
	while (count < 98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("%d\n", a + b);
	return (0);
}


