#include "main.h"

/**
 * flip_bits - Flip to get from one number  to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned long j, i;

	j = 0;
	result = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & reult))
			j++;
		result <<= 1;
	}

	return (j);
}
