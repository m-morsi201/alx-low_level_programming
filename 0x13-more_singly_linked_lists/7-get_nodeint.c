#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node .
 * @head: it is a pointer.
 * @index: is the index of the node, starting at 0.
 * Return: NULL if the node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int m;

	for (m = 0, n = head; n && m < index; n = n->next, m++)
		;
	return (n);
}
