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
	ssize_t bytesRead, bytesWritten;
	char *contents = malloc(letters);

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}

	bytesRead = read(fd, contents, letters);

	if (bytesRead == -1)
	{
		close(fd);
		return (0);
	}

	contents[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, contents, bytes);

	if (bytesRead != bytesWritten || bytesWritten == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	free(contents);
	return (bytesRead);
}
