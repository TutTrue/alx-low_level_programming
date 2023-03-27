#include "main.h"

/**
 * print_rev -  Prints a string, in reverse, followed by a new line.
 * @s: The string that will be reversed.
 */
void print_rev(char *s)
{
	int i, len, j;

	j = 0;

	while (s[j] != '\0')
		j++;

	len = j;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
