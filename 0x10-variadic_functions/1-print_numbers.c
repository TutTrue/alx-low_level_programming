#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n : number of intgers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sep = (char *) separator ? (char *) separator : "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), sep);
	}
	printf("\n");
	va_end(ap);
}
