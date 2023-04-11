#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
	   		printf(argv[i] + 1);
			printf("\n%d", i);
		}
	}
	else
	{
	  printf("%d", 0);
	}
	return (0);
}
