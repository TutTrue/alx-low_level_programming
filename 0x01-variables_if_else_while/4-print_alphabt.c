#include <stdio.h>

/**
 * main - Print from a to z except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;

		putchar(ch);
	}

	putchar('\n');

	return (0);
}
