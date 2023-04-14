#include "main.h"

/**
 * main - Entry point for the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
