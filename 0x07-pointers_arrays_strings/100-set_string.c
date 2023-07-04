#include "main.h"

/**
 * set_string -  function that sets the value of a pointer to a char.
 * @s: it is pointer to pointer.
 * @to: it is  pointer.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
