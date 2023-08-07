#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 *                 the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: If the file can not be opened or read, return 0.
 *		   If @filename is NULL, return 0.
 *		   If write fails or does not write the expected amount of bytes, return 0.
 *		   Otherwise, return the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buf;
	ssize_t total_count = 0, bytes_written;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[count] = '\0';
	while (total_count < count)
	{
		bytes_written = write(STDOUT_FILENO, buf + total_count, count - total_count);
		if (bytes_written <= 0)
		{
			free(buf);
			close(fd);
			return (0);
		}
		total_count += bytes_written;
	}
	free(buf);
	close(fd);

	return (total_count);
}
