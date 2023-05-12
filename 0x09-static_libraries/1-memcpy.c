#include "main.h"
/**
 * _memcpy - Copies memory area
 * @src: where memory is copied from
 * @dest: where memory is copied to
 * @n: The number of bytes to be copied
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int m = n;

	for (; j < m; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
