#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: a pointer to the beginning of the located substring, 
 * otherwise return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *t = needle;

		while (*j == *t && *t != '\0')
		{
			j++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (0);
}
