#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head of listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
