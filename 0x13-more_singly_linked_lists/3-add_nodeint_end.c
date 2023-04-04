#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer
 * @n: integer value to be stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = *head;
	last_node = (listint_t *)malloc(sizeof(listint_t));

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}

	else
	{
		while (new_node->next != NULL)
		{
			new_node = new_node->next;
		}
		new_node->next = last_node;
	}

	return (last_node);
}
