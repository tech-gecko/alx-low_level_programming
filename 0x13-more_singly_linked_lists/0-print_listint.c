#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: List whose elements are to be printed.
 *
 * Return: The number of nodes of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
