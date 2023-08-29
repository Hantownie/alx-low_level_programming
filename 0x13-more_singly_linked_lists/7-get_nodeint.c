#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
