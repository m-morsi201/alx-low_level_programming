#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node.
 * @head: pointer to pointer to the head.
 * @idx: index of the list.
 * @n: value of the new node.
 * Return: the address of the new node, or NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t)), *r;
	unsigned int t = 0;

	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	r = *head;
	while (r)
	{
		if (t == idx - 1)
		{
			newnode->next = r->next;
			r->next = newnode;
			return (newnode);
		}
		t++;
		r = r->next;
	}
	free(newnode);
	return (NULL);
}
