#include <stdlib.h>
#include "main.h"

/**
 * array_range - created array the array values from min
 * (included) to max (included), ordered from min to max
 * @min: min of array
 * @max: max of array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, len, j = 0;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
