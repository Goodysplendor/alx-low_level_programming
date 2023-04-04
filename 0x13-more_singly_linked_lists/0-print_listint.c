#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: linked list type of listint_t list to print
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
