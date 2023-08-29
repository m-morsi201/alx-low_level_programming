#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: it is a pointer to the head node.
 * Return: it will return the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t m;
	const listint_t *r = h;

	m = 0;

	while (h)
	{
		printf("%d\n", r->n);
		m++;
		r = r->next;
	}
	return (m);
}
