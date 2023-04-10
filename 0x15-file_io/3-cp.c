#include "main.h"

#define BUFFER_SIZE 1024

/**
 * copy - ....
 *
 * @file_from: ...
 * @file_to: ...
 * @size_read: ...
 * @size_written: ...
 * @buffer: ....
 * @argv: ...
 * Return: ...
 */
void _copy(ssize_t file_from, ssize_t file_to, ssize_t size_read,
ssize_t size_written, char buffer[BUFFER_SIZE], char *argv)
{
	size_read = read(file_from, buffer, BUFFER_SIZE);
	if (size_read > 0)
	{
		size_written = write(file_to, buffer, size_read);
		if (size_written == -1)
		{
			dprintf(STDERR_FILENO,  "Error: Can't write to %d\n", argv[2]);
			exit(99);
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
	ssize_t size_read = -1, size_written = -1;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


	_copy(file_from, file_to, size_read, size_written, buffer, *argv);

	close_file(file_from, file_to);

	return (0);
}

