#include "main.h"

/**
 * read_textfile - read a text from file and 
 * prints it to stdout
 * @filename: file name
 * @letters: number of letters printed
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd;
        char *buffer;
        size_t n_read, n_write;

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buffer = malloc(sizeof(char) * letters);
        if (!buffer)
                return (0);
        n_read = read(fd, buffer, letters);
        if (n_read == -1)
                return (0);
        close(fd);
        n_write = write(STDOUT_FILENO, buffer, letters);
        free(buffer);
        if (n_write == -1)
                return (0);
        return (n_write);
}