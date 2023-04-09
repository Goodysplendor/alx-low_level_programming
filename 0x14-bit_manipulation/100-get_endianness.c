#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
		return (1);
	else
		return (0);
}
