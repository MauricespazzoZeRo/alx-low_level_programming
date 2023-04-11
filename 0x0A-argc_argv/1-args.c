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
    printf("%d\n", argc - 1);

    return 0;
}
