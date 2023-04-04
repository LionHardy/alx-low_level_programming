#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer
 * @n: integer value to be stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	while (new_node == NULL)
		return (NULL);


	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
