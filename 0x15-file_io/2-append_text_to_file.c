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
	int x, y, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
