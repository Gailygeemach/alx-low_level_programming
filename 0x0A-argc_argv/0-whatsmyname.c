#include <stdio.h>
/**
 * main - A program that prints its name
 * followed by a new line
 * @argc: The number of arguments
 * @argv: an array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}
