#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: The char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *zzz;
	int k, x = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	zzz = malloc(sizeof(char) * (k + 1));
	if (zzz == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		zzz[x] = str[x];
	return (zzz);
}
