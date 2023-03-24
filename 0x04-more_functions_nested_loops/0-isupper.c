#include "main.h"

/**
 * _isupper - return 1 if is it uppercase
 * otherwise it returns 0.
 * @c : the char that will be checked.
 * Return: 0 if the char is lowercase and
 * 1 if the char is uppercase.
 */
int _isupper(int c)
{
	if (c > 96 && c < 173)
		return (0);

	return (1);
}
