#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - A function that concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of arguments
 * Return: A pointer to the new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
