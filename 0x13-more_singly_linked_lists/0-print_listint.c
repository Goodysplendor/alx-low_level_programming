#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->);
		num++;
		h = h->next;
	}

	return (num);
}
