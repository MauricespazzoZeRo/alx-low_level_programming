#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise an exit status
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *main_addr;

	/* Convert main function as arg to int */
	number_of_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Cast main address to char pointer */
	main_addr = (char *)main;

	/* Go through main code individually, print number_of_bytes of mem as hex */
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x ", *(main_addr + i) & 0xff);
	}

	printf("\n");

	return (0);
}
