#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point for program to copy one file to another
 * @ac: Number of arguments passed to program
 * @av: Array of arguments passed to program
 *
 * Return: 0 on success, otherwise 97, 98, 99, or 100 if an error occurs
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, num_bytes_read, num_bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (EXIT_FAILURE);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (EXIT_FAILURE);
	}

	while ((num_bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_bytes_written = write(fd_to, buffer, num_bytes_read);
		if (num_bytes_written != num_bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			return (EXIT_FAILURE);
		}
	}

	if (num_bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (EXIT_FAILURE);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		return (EXIT_FAILURE);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
