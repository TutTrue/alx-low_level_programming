#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: string contsind 0's and 1's
 * Return: unsigned int of binary
*/
unsigned int binary_to_uint(const char *b)
{
	int digit, index = (strlen(b) - 1), total = 0;

	while (*b)
	{
		digit = (*b) - '0';
		if (digit == 0 || digit == 1)
		{
			total += (pow(2, index)) * digit;
			index--;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
