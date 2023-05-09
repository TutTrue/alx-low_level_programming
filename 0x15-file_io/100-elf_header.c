#include "main.h"

/**
 * main - ...
 * @argc: number of inputs
 * @argv: strings passed
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31), exit(98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		write(STDERR_FILENO, "Error: Can't read from file\n", 28), exit(98);
	exit(98);
}
