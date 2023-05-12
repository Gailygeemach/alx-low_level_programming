#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed into it
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
