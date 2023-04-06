#include "lists.h"

/**
 * print_listint - Main entry point to print linked list
 *
 * @h: get the integers to be printed in the nodes
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == 0)
		return NULL;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
