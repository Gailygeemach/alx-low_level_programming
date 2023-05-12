#include "main.h"
/**
 * char *_strcpy - A function that copies the string 
 * pointed to by src
 * @dest: copy to 
 * @src: copy from
 * Return: value of the string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int d = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; d < j; d++)
	{
		dest[d] = src[d];
	}
	dest[j] = '\0';
	return (dest);
}
