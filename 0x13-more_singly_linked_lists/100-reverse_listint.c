#include "lists.h"

/**
 * reverse_listint - it is function reverses a listint_t linked list.
 * @head: it is pointer to the list.
 * Return: it is pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvnode, *nxtnode;

	if (!head)
		return (NULL);

	prvnode = NULL;
	while (*head)
	{
		nxtnode = (*head)->next;
		(*head)->next = prvnode;
		prvnode = *head;
		*head = nxtnode;
	}
	*head = prvnode;
	return (*head);
}

