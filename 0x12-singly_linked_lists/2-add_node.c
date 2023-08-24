#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if !
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i;

	while (str[i])
		i++;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = i;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
