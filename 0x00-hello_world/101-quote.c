#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 1 to indicate an error
 */
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = 0;

/* Calculate length of the message */
while (msg[len] != '\0')
len++;

/* Write the message to standard error */
if (write(2, msg, len) != len)
return (1);

return (1);
}
