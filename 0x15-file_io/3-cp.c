#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage_and_exit - Prints the usage message and exits
 *						  with code 97.
 */
void print_usage_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_and_exit - Prints an error message and exits with
 *					the appropriate exit code.
 * @msg: The error message.
 * @file_name: The name of the file associated with the error.
 * @xt_cde: Exit code for each case.
 */
void error_and_exit(const char *msg, const char *file_name, int xt_cde)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file_name);
	exit(xt_cde);
}

/**
 * close_fd_and_exit - Prints an error message for closing
 *					   a file descriptor and exits with code 100.
 *
 * @fd: The file descriptor associated with the error.
 */
void close_fd_and_exit(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * copy_file - Copies the content of one file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permit = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_and_exit("Can't read from file", file_from, 98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permit);
	if (fd_to == -1)
	{
		error_and_exit("Can't write to", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_and_exit("Can't write to", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		error_and_exit("Can't read from file", file_from, 98);
	}

	if (close(fd_from) == -1)
	{
		close_fd_and_exit(fd_from);
	}

	if (close(fd_to) == -1)
	{
		close_fd_and_exit(fd_to);
	}
}

/**
 * main - Entry point for program to copy one file to another
 * @ac: Number of arguments passed to program
 * @av: Array of arguments passed to program
 *
 * Return: 0 on success, otherwise 97, 98, 99, or 100 if an error occurs
 */

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		print_usage_and_exit();
	}

	copy_file(av[1], av[2]);

	return (0);
}
