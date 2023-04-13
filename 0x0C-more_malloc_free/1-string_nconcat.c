#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * @n: number of char taken from @s2
 * Return: pointer to the new allocated memory that contains s1 and n of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1 = 0, len2 = 0;
	char *p;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if ((int) n >= len2)
		n = (unsigned int) len2;
	p = malloc(sizeof(char) * (len1 + (int) n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < (int) n; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
