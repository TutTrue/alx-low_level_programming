#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the old block of memory
 * @old_size: size of old block of memory
 * @new_size: size of new block
 * Return: pointerto the new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nptr, i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		 if (nptr == NULL)
			 return (NULL);
		 return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ptr[i];
	}
	free(ptr);
	return (nptr);
}
