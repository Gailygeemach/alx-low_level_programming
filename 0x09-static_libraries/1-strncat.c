#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * it will be using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, y;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[j] = src[y];
		j++;
		y++;
	}
	dest[j] = '\0';
	return (dest);
}

