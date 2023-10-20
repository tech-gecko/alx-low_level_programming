#include "lists.h"

list_t *add_node(list_t **head , const char *str)
{
	list_t *new;
	size_t i = 0;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->str = strdup(str);
		new->len = strlen(new->str);
		new->next = *head;
	}
	return (new);
	free(new);
	
}
