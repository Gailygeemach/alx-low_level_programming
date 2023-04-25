#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * description: Computes and prints the sum of all the multples
 * of 3 or 5 below 1024 (excluded)
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
