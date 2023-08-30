#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor = head;
	listint_t *her = head;

	if (!head)
		return (NULL);
	while (tor && her && her->next)
	{
		her = her->next->next;
		tor = tor->next;
		if (her == tor)
		{
			tor = head;
			while (tor != her)
			{
				tor = tor->next;
				her = her->next;
			}
			return (her);
		}
	}
	return (NULL);
}
