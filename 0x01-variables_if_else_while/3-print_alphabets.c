#include <stdio.h>

/**
 * main - Print from a to z and 
 * 	  from A to Z
 *
 * Return: Always 0.
 */
int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

        putchar('\n');

        return (0);
}
