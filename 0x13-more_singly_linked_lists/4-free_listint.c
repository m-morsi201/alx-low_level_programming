#include "lists.h"

/**
 * free_listint - it is a function that frees a listint_t list.
 * @head: it is a pointer to the frist node.
 * Return: (void).
*/

void free_listint(listint_t *head)
{
	listint_t m;


	while (head != NULL)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
