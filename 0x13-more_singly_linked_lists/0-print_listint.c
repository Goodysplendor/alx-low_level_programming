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
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->);
		h = h->next;
	}
	return (count);
}
