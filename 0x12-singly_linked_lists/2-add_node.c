#include "lists.h"

/**
 * add_node - Adds a new node at the start of a list_t list.
 * @head: First member of the list.
 * @str: Data value for each member(string).
 *
 * Return: Address of the new element,
 *         NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
	free(new);
}
