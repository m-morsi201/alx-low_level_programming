#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: it is a pointer to list.
 * Return: it will return the number of node.
*/

size_t print_list(const list_t *h)
{
	size_t m;

	m = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		m++;
		h = h->next;
	}
	return (m);
}
