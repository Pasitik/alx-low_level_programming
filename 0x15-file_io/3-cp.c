#include "main.h"

#define BUFFER_SIZE 1024

/**
 * copy - ....
 *
 * @file_from: ...
 * @file_to: ...
 * @buffer: ....
 * @argv: ...
 * Return: ...
 */
void _copy(ssize_t file_from, ssize_t file_to,
char buffer[BUFFER_SIZE], char **argv)
{
	ssize_t size_read, size_written;

	while ((size_read = read(file_from, buffer, BUFFER_SIZE)))
	{

		if (size_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		size_written = write(file_to, buffer, size_read);
		if (size_written == -1)
		{
			dprintf(STDERR_FILENO,  "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		if (size_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
}

/**
 * close_file - ...
 *
 * @file_from: ...
 * @file_to: ...
 * Return: ...
 */
void close_file(ssize_t file_from, ssize_t file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_to);
		exit(100);
	}
}


/**
 * main - ...
 *
 * @argc: ...
 * @argv: ...
 * Return: ...
 */


int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	mode_t mode = 0664;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


	_copy(file_from, file_to, buffer, argv);

	close_file(file_from, file_to);

	return (0);
}


