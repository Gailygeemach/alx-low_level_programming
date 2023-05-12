#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: The string
 * Return: length
 */
int _strlen(char *s)
{
	int longa;

	longa = 0;
	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
