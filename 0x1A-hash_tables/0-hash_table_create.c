#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: it is a size of the array.
 * Return: a pointer to the new hash table.
 * 	or NULL If something went wrong.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n;

	n = NULL;

	if (size == 0)
		return (NULL);

	n = malloc(sizeof(hash_table_t));

	if (n == NULL)
		return (NULL);

	n->size = size;
	n->array = malloc(sizeof(hash_node_t *) * size);
	
	if (n->array == NULL)
		return (NULL);
	
	return (n);
}
