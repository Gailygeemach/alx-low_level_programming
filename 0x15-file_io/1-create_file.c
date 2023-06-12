#include "main.h"
/**
 * create_file- A function that creates a file
 * @filename: The filename
 * @text_content: The content of the file
 * Return: 1 on success, otherwise return -1
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int yletters;
	int ptr;

	if (!filename)
		return (-1);
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (x == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (yletters = 0; text_content[yletters]; yletters++)
		ptr = write(x, text_content, yletters);
	if (ptr == -1)
		return (-1);
	close(x);
	return (1);
}
