#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: 1 otherwise return 0
 */
int main(int argc, char *argv[])
{
	int x, y, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			length = strlen(ptr);
			for (y = 0; y < length; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
