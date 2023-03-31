#include "main.h"
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer to be printed
 * @size: size of the buffer
 *
 * Description: prints the content of size bytes of the buffer pointed by b.
 * The output prints 10 bytes per line. Each line starts with the position of
 * the first byte of the line in hexadecimal (8 chars), starting with 0.
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes
 * at a time, separated by a space. Each line shows the content of the buffer.
 * If the byte is a printable character, print the letter, if not, print '.'.
 * Each line ends with a new line '\n'. If size is 0 or less, the output should
 * be a new line only '\n'.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the hexadecimal address of the first byte of the line */
		printf("%08x: ", i);

		/* Print the hexadecimal content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j] & 0xff);
			}
			else
			{
				printf("   ");
			}
		}

		printf(" ");

		/* Print the ASCII representation of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%c", isprint(b[i + j]) ? b[i + j] : '.');
			}
		}

		printf("\n");
	}
}
