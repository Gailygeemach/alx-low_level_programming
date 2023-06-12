#include "main.h"
/**
 * append_text_to_file - a program that appends text at the end
 * of a file
 * @filename: The filename
 * @text_content: The content
 * Return: If the file exists return 1, otherwise return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, yletters, ptr;

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);
	if (text_content)
	{
		for (yletters = 0; text_content[yletters]; yletters++)
			ptr = write(x, text_content, yletters);
		if (ptr == -1)
			return (-1);
	}
	close(x);
	return (1);
}
