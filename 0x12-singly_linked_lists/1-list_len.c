#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A member of the list.
 *
 * Return: the number of elements/members in the list.
 */
size_t list_len(const list_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
