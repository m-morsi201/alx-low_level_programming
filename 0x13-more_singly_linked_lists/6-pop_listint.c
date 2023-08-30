#include "lists.h"

/**
 * pop_listint -  deletes the head node and returns the head node’s data (m).
 * @head: it is a pointer to the head node.
 * Return: (m) the popped node value.
*/

int pop_listint(listint_t **head)
{
	int m;
	listint_t *r;

	if (!*head || !head)
		return (0);

	r = (*head)->next;
	m = (*head)->n;
	free(*head);
	*head = r;
	return (m);

}
