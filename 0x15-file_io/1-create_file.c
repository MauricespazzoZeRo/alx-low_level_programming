#include "main.h"

/**
 * create_file - creates a file with the given name and writes the text content
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file (NULL-terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		res = write(fd, text_content, len);
		if (res == -1 || res != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
