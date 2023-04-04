#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *tmp;

	if (head == NULL)
		return;

	new = *head;

	while (new != NULL)
	{
		tmp = new->next;
		free(new);
		new = tmp;
	}

	*head = NULL;
}
