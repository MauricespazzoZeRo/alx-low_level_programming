#include "main.h"

/**
 * main - adds positive integers
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
    {
		printf("0\n");
		return (0);
    }

	for (i = 1; i < argc; i++)
    {
		for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
	    {
			printf("Error\n");
			return (1);
	    }
	}
		sum += atoi(argv[i]);
    }

	printf("%d\n", sum);

	return (0);
}
