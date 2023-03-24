#include "test/main.h"

/**
 * more_numbers -  Prints the numbers to 14 10 times.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(1 + '0');

			_putchar(c % 10 + '0');
		}

		_putchar('\n');
	}

}
