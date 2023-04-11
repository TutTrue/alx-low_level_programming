#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - get a copy of string in new
 * allocated space
 * @str: the string that will be copied
 * Return:  On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *p;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (strlen(str) + 1));

	if (p == NULL)
		return (NULL);

	len = (int) strlen(str);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';

	return (p);

}
