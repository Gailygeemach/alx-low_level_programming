#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @src: entered value
 * @dest: entered value
 * @n: entered value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
