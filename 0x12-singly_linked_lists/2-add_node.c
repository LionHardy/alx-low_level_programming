#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;
	char *cub;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	cub = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);

		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->next = *head;

	new_node->str = cub;
	new_node->len = len;

	return (new_node);
}
