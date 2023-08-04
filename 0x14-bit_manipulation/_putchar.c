#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes the  character c to standard output (stdout).
 * @c: The character to print.
 *
 * Return: On success, it returns 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
