#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: the number of nodes
 *
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
