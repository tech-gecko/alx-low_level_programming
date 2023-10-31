#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The file to add text to.
 * @text_content: The text content to be
 *                appended to the file.
 *
 * Return: 1 if the file exists, and
 *         -1 if the file does not exist, or
 *            if you don't have permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytesWritten;
	size_t content_length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[content_length] != '\0')
		content_length++;
	bytesWritten = write(fd, text_content, content_length);
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
