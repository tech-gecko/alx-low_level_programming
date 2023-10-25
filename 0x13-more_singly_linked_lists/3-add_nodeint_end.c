#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to first member of the linked list.
 * @n: Integer value of members of the linked list.
 *
 * Return: Pointer to new end node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *current;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_end;
	}
return (new_end);
free(new_end);
}
