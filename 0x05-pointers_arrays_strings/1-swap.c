#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @*a: first intger.
 * @*b: Second intger.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
