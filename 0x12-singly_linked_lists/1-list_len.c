#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: it is a pointer ot the list.
 * Return: (m) the number of elements.
*/

size_t list_len(const list_t *h)
{
	size_t m;

	m = 0;

	while (h)
	{
		m += 1;
		h = h->next;
	}
	return (m);
}
