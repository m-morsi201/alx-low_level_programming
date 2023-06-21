#include "main.h"

/**
 * _abs - is function to computes the absolute value of an integer .
 *
 * @num: is the input to check it .
 *
 * Return: num allws.
*/

int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
