#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to first element of the linked list.
 * @n: Integer value of first element of the linked list.
 *
 * Return: Pointer to new node if it succeeds,
 *         NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
	free(new);
}
