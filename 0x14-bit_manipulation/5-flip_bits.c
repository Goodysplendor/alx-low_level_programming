#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *		 to get from one number  to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: the number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_flips = 0;

	while (xor_result)
	{
		num_flips += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_flips);
}
