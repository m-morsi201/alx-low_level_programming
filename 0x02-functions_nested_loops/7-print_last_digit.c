#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @num: it is te input .
 *
 * Return: ldig to success
*/

int print_last_digit(int num)
{
	int ldig;

	if (num < 0)
		ldig = -1 * (num % 10);
	else
		ldig = num % 10;

	_putchar(ldig + '0');
	return (ldig);
}
