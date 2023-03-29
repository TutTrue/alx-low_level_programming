#include "main.h"
#include "string.h"

/**
 * _strncat - The _strncat function is similar to the _strcat function,
 * except thatit will use at most n bytes from src;
 * andsrc does not need to be null-terminated if it contains n or more bytes.
 * @dest: first string.
 * @src: second string.
 * @n: number of element that will be concat.
 * Return: Return a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int i;

	for (i = 0; i < n; i++)
		dest[len1++] = src[i];

	return (dest);
}
