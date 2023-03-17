#include <stdio.h>

/**
 * main - Print from a to z
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

        return (0);
}
