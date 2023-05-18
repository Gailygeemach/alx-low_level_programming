#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates 2 strings
 * @s1: The string
 * @s2: The string
 * @n: index
 * Return: A pointer otherwise return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1 = 0, size2 = 0, t;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
		n = size2;
	str = malloc((size1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	for (t = 0; t < size1; t++)
	{
		str[t] = s1[t];
	}
	for (; t < (size1 + n); t++)
	{
		str[t] = s2[t - size1];
		str[t] = '\0';
	}
	return (str);
}
