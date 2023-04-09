#include "main.h"

/**
 * close - ...
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

 #define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int file_from, file_to; 
	char buffer[BUFFER_SIZE];
	ssize_t size_read, size_written;

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

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	size_read = read(file_from, buffer, BUFFER_SIZE);
	while (size_read > 0)
	{
		size_written = write(file_to, buffer, size_read);
		if (size_written == -1)
		{
			dprintf(STDERR_FILENO,  "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_file(file_from, file_to);

	/*if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}*/

	return (0);
}

