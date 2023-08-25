#include "lists.h"
void morsi(void) __attribute__ ((constructor));

/**
 * morsi - function that prints  before the main function is executed.
*/

void morsi(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
