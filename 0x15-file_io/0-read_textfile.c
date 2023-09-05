#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: it is a name of the file.
 * @letters: it is a number of byte.
 * Return: (0) if filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	int d;
	char b[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	f = read(d, &b[0], letters);
	f = write(STDOUT_FILENO, &b[0], f);
	close(d);
	return (f);
}
