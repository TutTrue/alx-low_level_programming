#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return:  pointer should point to a newly allocated space in memory which
 * containsthe contents of s1, followed by the contents of s2, and null termina
 * Null if failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *p;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return NULL;

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	
	return (p);
}
