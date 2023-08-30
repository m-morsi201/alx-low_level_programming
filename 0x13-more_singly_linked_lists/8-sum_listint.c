#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n).
 * @head: it is a pointer to the head.
 * Return: (s) or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int s;

	s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
