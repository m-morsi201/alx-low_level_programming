#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: it is a pointer.
*/

void free_list(list_t *head)
{
	list_t *m;

	m = head;

	while (head != NULL)
	{
		m = head;
		head = head->next;
		free(m->str);
		free(m);
	}
	free(m);

}
