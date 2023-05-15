#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - A function that concatenates two strings
 * @s1: The string to concatenate
 * @s2: The string to concatenate
 * Return: A pointer to the newly allocated space in memory
 * Otherwise return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	b = 0;
	if (s1)
	{
		while (a < len1)
		{
			str[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (len1 + len2))
		{
			str[a] = s2[b];
			a++;
			b++;
		}
	}
	str[a] = '\0';
	return (str);
}
