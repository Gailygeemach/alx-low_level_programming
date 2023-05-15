#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - A function that concatenates all the arguments of the program
 * @ac: The number of command lines arguments
 * @av: An array of size ac
 * Return: A pointer to the new string, otherwise return NULL
 */
char *argstostr(int ac, char **av)
{
	int r, s, t, len;
	char *s1;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (s = 0; av[r][s] != '\0'; s++)
			len++;
		len++;
	}
	s1 = malloc(sizeof(char) * (len + 1));
	if (s1 == NULL)
		return (NULL);
	t = 0;
	for (r = 0; r < ac; r++)
	{
		for (s = 0; av[r][s] != '\0'; s++)
		{
			s1[t] = av[r][s];
			t++;
		}
		s1[t] = '\n';
		t++;
	}
	return (s1);
}
