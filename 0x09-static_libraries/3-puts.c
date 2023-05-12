#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
