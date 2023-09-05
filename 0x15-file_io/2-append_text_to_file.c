#include "main.h"
#include <stdio.h>

/**
 * _strlen - it is a function to get a length.
 * @s: this is a string.
 * Return: it well return length of string.
*/

int _strlen(char *s)
{
	int r = 0;

	if (!s)
		return (0);

	while (*s++)
	{
		r++;
	}

	return (r);
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: it is a file.
 * @text_content: this is the text.
 * Return: 1, or 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t b, e;

	b = 0;
	e = _strlen(text_content);

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (e)
		b = write(fl, text_content, e);
	close(fl);
	return (b == e ? 1 : -1);
}
