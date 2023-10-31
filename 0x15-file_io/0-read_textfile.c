#include "main.h"

/**
 * read_textfile - Reads text file and
 *                 prints it to STDOUT.
 * @filename: Name of file to be read.
 * @letters: Number of letters to be printed.
 *
 * Return: Number of letters it could read & print,
 *	   0 if the file cannot be opened, and
 *	   0 if name is NULL & write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char contents[letters + 1];

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}

	bytes = read(fd, contents, letters);

	if (bytes == -1)
	{
		close(fd);
		return (0);
	}

	contents[bytes] = '\0';

	if (write(STDOUT_FILENO, contents, bytes) != bytes)
	{
		close(file);
		return (0);
	}

	close(file);
	return (bytes);
}
