#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: the size of array.
 * @c: the char that will be initialized
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p =(char *)  malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
