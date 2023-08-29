#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element
 * @index: index
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ram = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	ram = temp->next;
	temp->next = ram->next;
	free(ram);
	return (1);
}
