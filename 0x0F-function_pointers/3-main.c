#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise an exit status
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*opr_func)(int, int);

	opr_func = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (opr_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = opr_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
