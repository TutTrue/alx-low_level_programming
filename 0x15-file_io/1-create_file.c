#include "main.h"
/**
 * _strlen - len of string
 * @ch: string
 * Return: len of string
 */
int _strlen(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
		i++;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string in the file created
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	n_write = write(fd, text_content, _strlen(text_content));
	if (n_write == -1)
		return (-1);
	return (1);
}
