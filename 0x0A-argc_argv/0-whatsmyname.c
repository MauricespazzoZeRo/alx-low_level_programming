#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *program_name;
	char *program_path = argv[0];

	if (argc > 0)
	{
		program_name = strrchr(argv[0], '/');

		if (program_name == NULL)
		{
			program_name = argv[0];
		}
		else
		{
			program_name++;
		}
		printf("%s\n", program_path);
	}

  return (0);
}
