#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to a pointer
 *
 * Return: head node’s data (n), if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	data = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (data);
}
