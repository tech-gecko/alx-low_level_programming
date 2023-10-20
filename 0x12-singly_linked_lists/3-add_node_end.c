#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list-t list.
 * @head: Start of the list.
 * @str: Value of each node.
 *
 * Return: Address of the new element,
 *         NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	if (str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = end_node;
	}
	return (end_node);
}
