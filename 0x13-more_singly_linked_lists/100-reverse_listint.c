#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 *@head: pointer to a pointer
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	while (head != NULL)
	{
		temp2 = head->link;
		head->link = temp;
		temp = head;
		head = temp2;
	}
	head = temp;
	return (head);
}
