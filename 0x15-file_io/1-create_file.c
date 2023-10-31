#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to be created.
 * @text_content: NULL terminated string
 *                to be written to the file.
 *
 * Return: 1 on success,
 *         -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
