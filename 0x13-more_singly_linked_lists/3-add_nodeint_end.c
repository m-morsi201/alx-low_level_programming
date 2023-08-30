#include "lists.h"

/**
 * add_nodeint_end - it is function that adds new node at the end of list.
 * @n: it is a intger.
 * @head: it is a pointer to the frist node.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *m;

	l = malloc(sizeof(listint_t));
	m = *head;

	if (l != NULL)
	{
		l->n = n;
		l->next = NULL;
	}
	else
		return (NULL);

	if (m != NULL)
	{
		while (m->next != NULL)
			m = m->next;

		m->next = l;
	}
	else
		*head = l;
	return (l);

}
