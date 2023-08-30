#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: it is a pointer to the frist node.
 * Return: (void)
*/

void free_listint2(listint_t **head)
{
	listint_t *m, *r;

	if (head)
	{
		m = *head;
		while (m)
		{
			r = m;
			m = m->next;
			free(r);
		}

	*head = NULL;
	}
}
