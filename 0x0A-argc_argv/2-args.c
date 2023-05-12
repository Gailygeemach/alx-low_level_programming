#include <stdio.h>
/**
 * main - A program that prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
