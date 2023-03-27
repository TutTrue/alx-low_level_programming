#include "main.h"

/**
 * _puts -  Prints a string, followed by a new line, to stdout.
 * @*str: The string that will be printed.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
