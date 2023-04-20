#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sep;

	sep = (char *) separator ? (char *) separator : "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);
		if (i != n - 1)
			printf("%s%s", str  ? str : "(nil)", sep);
		else
			printf("%s", str ? str : "(nil)");
	}
	printf("\n");
}
