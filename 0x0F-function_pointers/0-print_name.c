#include "function_pointers.h"

/**
 * print_name - it is a function that prints a name.
 * @name: it is a string.
 * @f: it is a function pointer.
 * Return: void if (name and f) = NULL.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	f(name);
}
