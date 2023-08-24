#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i])
		i++;
	nod = malloc(sizeof(list_t));
	if (!nod)
		return (NULL);
	nod->str = strdup(str);
	nod->len = i;
	nod->next = NULL;
	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nod;
	return (nod);
}
