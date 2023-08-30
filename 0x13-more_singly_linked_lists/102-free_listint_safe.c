#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int num;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
