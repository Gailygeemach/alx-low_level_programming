#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: 1, otherwise return 0
 */
int main(int argc, char *argv[])
{
	int o, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	o = atoi(argv[1]);
	if (o < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; o >= 0;)
	{
		if (o >= 25)
			o -= 25;
		else if (o >= 10)
			o -= 10;
		else if (o >= 5)
			o -= 5;
		else if (o >= 2)
			o -=  2;
		else if (o >= 1)
			o -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

