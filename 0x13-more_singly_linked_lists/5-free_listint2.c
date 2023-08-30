#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: it is a pointer to the frist node.
 * Return: (void)
*/

void free_listint2(listint_t **head)
{
	listint_t **m = head, *r;

	if (m != NULL)
	{
		while (*head != NULL)
		{
			r = *head;
			free(r);
			*head = (*head)->next;
		}

	*m = NULL;
	}
}
