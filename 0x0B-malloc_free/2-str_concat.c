#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return:  pointer should point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * Null if failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *p = malloc(sizeof(s1) * strlen(s1) + sizeof(s2) * strlen(s2));
	int len1 = (int) strlen(s1);
	int len2 = (int) strlen(s2);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];

	return (p);
}
