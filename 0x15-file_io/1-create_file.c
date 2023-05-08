#include "main.h"

/**
 * create_file - ...
 *
 * @filename: ...
 * @text_content: ...
 * Return: ....
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res;
	int len = 0;
	mode_t m = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, m);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
		{
			len++;
		}
		res = write(fd, text_content, len);
		if (res != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);

	return (1);

}


