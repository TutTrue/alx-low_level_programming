#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all parameters or 0 if @n =0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return ((int) sum);
}
