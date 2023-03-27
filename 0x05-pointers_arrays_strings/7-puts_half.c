#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string that will be half printed.
 */
void puts_half(char *str)
{
	int s, e = 0;

	while (str[e] != '\0')
		e++;

	if (e % 2 == 0)
		s = e / 2;
	else
		s = (e - 1) / 2;

	for (s = s; s < e; s++)
		_putchar(str[s]);

	_putchar('\n');
}
