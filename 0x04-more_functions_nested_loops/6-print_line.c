#include "test/main.h"

/*
 * print_line - Print n time _ if n > 0 else print '\n'.
 * @n: The numbers of _.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
