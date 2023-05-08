#include "main.h"

/**
 * read_textfile - ...
 *
 * @filename: ...
 * @letters: ...
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t b_read, to_output;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	buffer = (char *) malloc(letters);
	if (buffer == NULL)
		return (0);

	b_read = read(fd, buffer, letters);
	if (b_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	to_output = write(STDOUT_FILENO, buffer, b_read);
	if (to_output == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (to_output);

}

