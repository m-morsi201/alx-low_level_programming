#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: it is a pointer.
*/

void free_list(list_t *head)
{
	list_t *m;
	list_t *r;

	if (head)
	{
		m = head;
		r = head->next;
		while (head != NULL)
		{
		free(m->str);
		free(m);
		m = r;
		r = r->next;
		}
	free(m);
	free(r);
	free(m->str);
	}
}
