#include "main.h"

/**
 * append_text_to_file - ...
 *
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len = 0;
	unsigned int write_size;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (*(text_content + len) != '\0')
		len++;

	write_size = write(fd, text_content, len);
	if (write_size != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

