#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: First member of the listint_t list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
