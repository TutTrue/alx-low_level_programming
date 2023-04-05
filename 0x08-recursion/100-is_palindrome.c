#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * reverse_string - return a new reversed string var
 * @str: the string that will be reversed
 * Return: a new string revered
 */
char *reverse_string(char *str)
{
	int len = strlen(str);
	char *reversed_str = malloc(len + 1);
	int i;

	for (i = 0; i < len; i++)
	{
		reversed_str[i] = str[len - i - 1];
	}
	reversed_str[len] = '\0';
	return (reversed_str);
}
/**
 * is_palindrome -checks if the string and its reverse is equal or not
 * @s: the string
 * Return: 1 if equal and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;

	char *x = reverse_string(s);

	while (*s)
	{
		if (x[i] != *(s))
			return (0);
		s++;
		i++;
	}
	return (1);
}
