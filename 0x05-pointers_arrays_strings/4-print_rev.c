#include "main.h"

/**
 * print_rev - prints string in rev
 * @s: string to be printed out
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}