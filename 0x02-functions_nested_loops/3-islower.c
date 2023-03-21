#include "main.h"

/**
 * _islower(int c) - Returns 0 if the char c is lowercase
 * otherwise it returns 1.
 */
int _islower(int c)
{
	if (c > 96 && c < 173)
		return (1);

	return (0);
}
