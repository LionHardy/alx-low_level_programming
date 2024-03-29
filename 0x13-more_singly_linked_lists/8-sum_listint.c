#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
