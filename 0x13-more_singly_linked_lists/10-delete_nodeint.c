#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	unsigned int a;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (a = 0; a < index && current != NULL; a++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);


	return (1);
}
