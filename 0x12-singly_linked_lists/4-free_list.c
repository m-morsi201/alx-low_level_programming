#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: it is a pointer.
*/

void free_list(list_t *head)
{
	list_t *m;

	while (head != NULL)
	{
		m = head->next;
		free(head->str);
		free(head);
		head = m;
	}
}
