#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: string
 * @c: entered value
 * Return:  a pointer to the first occurrence of the character c
 *  in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
