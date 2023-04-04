#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer
 * @idx:is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2;
	unsigned int i;

	ptr2 = malloc(sizeof(listint_t));

	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
	{
		free(ptr2);
		return (NULL);
	}

	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
