#include "main.h"

/**
 * create_file - it is a function that creates a file.
 * @filename: it is a name of the file to create.
 * @text_content:  is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int t, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[t] != '\0')
		t++;

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	write(f, text_content, t);

	return (1);
}
