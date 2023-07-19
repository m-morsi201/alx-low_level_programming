#include "function_pointers.h"

/**
 * print_name - it is the function to print name .
 * @name: it is the string .
 * @f: it is the function pointer.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
