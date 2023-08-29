#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element
 * @n: number to insert
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ram;
	listint_t *temp = *head;

	ram = malloc(sizeof(listint_t));
	if (!ram)
		return (NULL);
	ram->n = n;
	ram->next = NULL;
	if (*head == NULL)
	{
		*head = ram;
		return (ram);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ram;
	return (ram);

}
