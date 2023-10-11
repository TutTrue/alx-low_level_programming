#include "search_algos.h"
/**
  * jump_search - search for an element in an array
  * @array: the array we want to search in
  * @size: size of the array
  * @value: the target value
  * Return: the index of the value or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev = 0, i;

	if (!array || size <= 0)
		return (-1);

	step = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < size)
	{
		prev = step;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		step += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i <= (prev + step) && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
