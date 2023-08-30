#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: it is a pointer to the frist node.
 * @n: it is integer.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *f;

	f = malloc(sizeof(listint_t));

	if (f == NULL)
	{
		return (NULL);
	}

	f->n = n;
	f->next = *head;
	*head = f;
	return (f);
}
