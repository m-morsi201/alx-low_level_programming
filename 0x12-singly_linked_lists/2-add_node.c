#include "lists.h"

/**
 * add_node - function adds new node at the beginning of a list_t list.
 * @head:it is pointer to head.
 * @str: it is a string.
 * Return: null or m.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	int l;
	char *r;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);

	r = strdup(str);
	if (r == NULL)
	{
		free(m);
		return (NULL);
	}

	for (l = 0; str[l];)
		l += 1;

	m->str = r;
	m->len = l;
	m->next = *head;
	*head = m;
	return (m);

}
