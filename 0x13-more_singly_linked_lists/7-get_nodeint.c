#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: is the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
