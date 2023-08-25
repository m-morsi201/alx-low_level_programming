#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list_t list
 * @head: it is a pointer.
 * @str: it is a string.
 * Return: NULL or m.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *m, *r;
	size_t l;

	l = 0;
	m = malloc(sizeof(list_t));

	if (m == NULL)
		return (NULL);

	while (str[l])
		l += 1;

	m->len = l;
	m->str = strdup(str);

	if (*head == NULL)
	{
		m->next = *head;
		*head = m;
	}
	else
	{
		m->next = NULL;
		r = *head;
		while (r->next)
			r = r->next;
		r->next = m;
	}
	return (m);
}
