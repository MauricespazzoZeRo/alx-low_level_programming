#include "main.h"

/**
 * main - multiplies two integers
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
