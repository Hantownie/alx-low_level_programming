#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *ram;
	unsigned int i;

	ram = malloc(sizeof(listint_t));
	if (!ram || *head)
		return (NULL);
	ram->n = n;
	ram->next = NULL;

	if (idx == 0)
	{
		ram->next = *head;
		*head = ram;
		return (ram);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ram->next = temp->next;
			temp->next = ram;
			return (ram);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
