#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
	  printf("%d\n", 0);
	}
	return (0);
}
