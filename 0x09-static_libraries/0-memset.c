#include "main.h"
/**
 * _memset - Function that fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: The address of memory to be filled
 * @b: The byte to fill the memory
 * @n: The number of bytes to be changed
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
