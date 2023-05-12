#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: entered value
 * @s2: entered value
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int t = 0;

	while (s1[t] != '\0' && s2[t] != '\0')
	{
		if (s1[t] != s2[t])
		{
			return (s1[t] - s2[t]);
		}
		t++;
	}
	return (0);
}
