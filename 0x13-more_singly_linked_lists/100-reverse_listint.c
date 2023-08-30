#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *rev = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = temp;
	}
	return (rev);
}
