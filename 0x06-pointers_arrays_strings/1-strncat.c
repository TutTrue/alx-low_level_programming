#include "main.h"
#include "string.h"

/**
 * _strncat - Concatenates two strings, taking at most n bytes from src.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);
	int i;

	if (len1 + len2 >= n) {
		return NULL;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len1++] = src[i];


	return dest;
}
