#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: number of array element
 * @size: size of each element
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int) nmemb; i++)
		p[i] = 0;

	return (p);
}
