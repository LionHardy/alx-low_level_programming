#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;

	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
