#include "main.h"

/**
 * _strlen - it is a function to get lens of string.
 * @s:it is a string.
 * Return: lenth of string.
*/

ssize_t _strlen(const char *s)
{
	ssize_t e = 0;

	if (!s)
		return (-1);

	while (*s++)
		++e;

	return (e);
}

/**
 * create_file - it is a function that creates a file.
 * @filename: it is a name of the file to create.
 * @text_content:  is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t bw;
	int f;

	bw = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f < 0)
		return (-1);

	if (text_content)
		b_written = write(f, text_content, _strlen(text_content));

	close(f);

	if (bw < 0)
		return (-1);
	return (1);
}
