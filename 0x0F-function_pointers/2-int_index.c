#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array we use
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element forthe cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || action == NULL)
		return (NULL);

	if ((int) size <= 0)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
			return (i);
	}
	return (-1);
}
