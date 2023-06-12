#include "main.h"
/**
 * read_textfile - A function that reads a textfile and prints
 * the letters
 * @filename: The filename
 * @letters: The letters
 * Return: The number of letters printed otherwise return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t tmp, ptr;
	char *str;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	str = malloc(sizeof(char) * (letters));
	if (!str)
		return (0);
	tmp = read(x, str, letters);
	ptr = write(STDOUT_FILENO, str, tmp);
	close(x);
	free(str);
	return (ptr);
}
