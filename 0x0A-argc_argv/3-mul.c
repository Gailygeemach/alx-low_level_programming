#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the product of two integers
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = 1;
		for (j = 1; j < 3; j++)
			k *= atoi(argv[j]);
		printf("%d\n", k);
	}
	return (0);
}



