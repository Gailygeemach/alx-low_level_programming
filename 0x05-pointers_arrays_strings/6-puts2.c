#include "main.h"
/**
 * puts2 - a function to print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int z = 0;
	char *c = str;
	int j;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	z = longi - 1;
	for  (j = 0; j <= z; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
