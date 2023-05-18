#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates 2 strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to concatenate
 * Return:  pointer to the concatenated space in memory
 * Otherwise return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		str[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		str[len++] = s2[index];
	str[len] = '\0';
	return (str);
}
