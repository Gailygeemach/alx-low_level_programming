#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Errror\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
