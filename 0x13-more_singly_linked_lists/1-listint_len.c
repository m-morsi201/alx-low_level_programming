#include "lists.h"

/**
 * function that returns the number of elements in a linked listint_t list.
 * @h: is is a pointer of the head node.
 * Return: (m) it will return the number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	size_t m;

	m = 0;

	while (h != NULL)
	{
		m++;
		h = h_>next;
	}
	return (m);
}
