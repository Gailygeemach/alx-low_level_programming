#include "main.h"
/**
 * _atoi - A function that converts astring into an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, z = 0;
	unsigned int unsig = 0;

	while (!(s[z] <= '9' && s[z] >= '0') && s[z] != '\0')
	{
		if (s[z] == '-')
			sig *= -1;
		z++;
	}
	while (s[z] <= '9' && (s[z] >= '0' && s[z] != '\0'))
	{
		unsig = (unsig * 10) + (s[z] - '0');
		z++;
	}
	unsig *= sig;
	return (unsig);
}
