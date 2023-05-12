#include "main.h"
/**
 * main - A program that prints its name
 * followed by a new line
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	(void)argc;
	return (0);
}
