#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: array that will be used
 * @size: size of array
 * @action: the action that will happend to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
