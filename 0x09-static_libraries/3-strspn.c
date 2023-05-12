#include "main.h"
/**
 * _strspn - A function that gets the length of a
 * prefix substring
 * @s: input value
 * @accept: input value
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				d++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (d);
}
