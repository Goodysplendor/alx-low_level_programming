#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the number of i
 * @index: Starting from 0 of the bit you want to set.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
