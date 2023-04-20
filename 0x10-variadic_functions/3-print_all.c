#include "variadic_functions.h"

#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format string containing types of arguments
 *			c: char
 *			i: integer
 *			f: float
 *			s: char * (if NULL, print (nil) instead)
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *format_ptr = format;
	int i;
	char c;
	char *s;
	float f;

	va_start(args, format);

	while (format && *format_ptr)
	{
		switch (*format_ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
		}

		format_ptr++;

		if (*format_ptr && (*format_ptr == 'c' ||
							*format_ptr == 'i' ||
							*format_ptr == 'f' ||
							*format_ptr == 's'))
		{
			printf(", ");
		}
	}

	printf("\n");

	va_end(args);
}
