#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text will be appended to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t n_write;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	n_write = write(fd, text_content, len);
	if (n_write == -1)
		return (-1);
	close(fd);
	return (1);
}
