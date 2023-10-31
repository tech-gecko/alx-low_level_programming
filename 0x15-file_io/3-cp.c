#include "main.h"

/**
 * error - Easily handles errors.
 * @code: Exit code.
 * @format: Error message.
 * @arg: Argumenet related to error.
 *
 * Return: Nothing.
*/
void error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * errorFD - Easily handle errors for FDs.
 * @code: Exit code.
 * @format: Error message.
 * @FD: file descriptor value related to error.
 *
 * Return: Nothing.
*/
void errorFD(int code, const char *format, int FD)
{
	dprintf(STDERR_FILENO, format, FD);
	exit(code);
}


/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if success.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytesRead, bytesWritten;
	size_t BUFFER_SIZE = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		error(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytesRead == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
	{
		errorFD(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		errorFD(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}
