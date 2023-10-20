#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list in question.
 *
 * Return: Number of list nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("[%u] %s", h->len, h->str);

		n++;
		h = h->next;
	}
	return (n);
}
