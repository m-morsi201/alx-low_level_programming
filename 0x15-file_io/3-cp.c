#include "main.h"

/**
 * err_f - function to checks if files can be opened.
 * @f_from: it is a file from.
 * @f_to: it is a file to.
 * @arg_v: it is apointer.
*/

void err_f(int f_from, int f_to, char *arg_v[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_v[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_v[2]);
		exit(99);
	}
}

/**
 * main - it is function to copy text to file .
 * @arg_c: it is number of char to copy.
 * @arg_v: it is number of char to past.
 * Return: 0 .
*/

int main(int arg_c, char *arg_v[])
{
	int f_from, f_to, err;
	ssize_t nread, nwrite;
	char buf[1024];

	if (arg_c != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(arg_v[1], O_RDONLY);
	f_to = open(arg_v[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_f(f_from, f_to, arg_v);

	nread = 1024;
	while (nread == 1024)
	{
		nread = read(f_from, buf, 1024);

		if (nread == -1)
			err_f(-1, 0, arg_v);
		nwrite = write(f_to, buf, nread);
		if (nwrite == -1)
			err_f(0, -1, arg_v);
	}

	err = close(f_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err = close(f_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}
