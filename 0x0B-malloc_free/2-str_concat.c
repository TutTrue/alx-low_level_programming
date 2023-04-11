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
	int i, len1, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(char) * strlen(s1) + sizeof(char) * strlen(s2));

	if (p == NULL)
		return (NULL);

	len1 = (int) strlen(s1);
	len2 = (int) strlen(s2);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];

	p[i + len1] = '\0';

	return (p);
}
