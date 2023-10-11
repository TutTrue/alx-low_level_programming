#include "search_algos.h"
/**
  * binary_search - search for an element in an array
  * @array: the array we want to search in
  * @size: size of the array
  * @value: the target value
  * Return: the index of the value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t s = 0, e = size - 1, m;

	if (!array)
		return (-1);
	while (e >= s)
	{
		m = (e + s) / 2;
		printf("Searching in array: ");
		print_arr(array, s, e);
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			e = m - 1;
		if (array[m] < value)
			s = m + 1;
	}
	return (-1);
}
/**
 * print_arr - print a partition of an array
 * @array: the array we print
 * @s: start index
 * @e: end index
*/
void print_arr(int *array, size_t s, size_t e)
{
	size_t i;

	for (i = s; i <= e; i++)
	{
		if (i != s)
			printf(", ");
		 printf("%d", array[i]);
	}
	printf("\n");
}
