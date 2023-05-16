#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - a function that locates the index marking the end of the
 * first word contained in a string
 * @str: The string to be searched
 * Return: integer
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - A function that counts the number of words in a string
 * @str: The string to be searched
 * Return: The number of words in a string
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - A function that splits a string into words
 * @str: The string to split
 * Return: A pointer to an array ofstrings , otherwise return NULL
 */
char **strtow(char *str)
{
	char **matrix;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		matrix[w] = malloc(sizeof(char) * (letters + 1));
		if (matrix[w] == NULL)
		{
			for (; w >= 0; w--)
				free(matrix[w]);
			free(matrix);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			matrix[w][l] = str[index++];
		matrix[w][l] = '\0';
	}
	matrix[w] = NULL;
	return (matrix);
}
