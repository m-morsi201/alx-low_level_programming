#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: it is a pointer to the head node.
 * Return: it will return the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t m;

	m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
