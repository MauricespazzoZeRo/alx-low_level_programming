#include "main.h"

/**
 * print_name - This function prints a name
 *
 * @name: name to print
 * @f: Function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	_putchar(*name);
}
