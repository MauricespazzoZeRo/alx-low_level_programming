#include "main.h"
#include <stddef.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _islower(int c)
{
	/* implementation here */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _isalpha(int c)
{
	/* implementation here */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _abs(int n)
{
	/* implementation here */
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

int _isupper(int c)
{
	/* implementation here */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _isdigit(int c)
{
	/* implementation here */
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _strlen(char *s)
{
	/* implementation here */
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

void _puts(char *str)
{
	/* implementation here */
	 printf("%s\n", str);
}

char *_strcpy(char *dest, char *src)
{
	/* implementation here */
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}

int _atoi(char *s)
{
	/* implementation here */
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Handle leading whitespace */
	while (s[i] == ' ' || s[i] == '\t')
		i++;

	/* Handle sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		sign = 1;
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply sign */
	result *= sign;

	return (result);
}

char *_strcat(char *dest, char *src)
{
	/* implementation here */
	 char *result = dest;

	/* Move the pointer to the end of dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the src string to the end of dest string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	return (result);
}

char *_strncat(char *dest, char *src, int n)
{
	/* implementation here */
	size_t dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy up to n characters from the source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add a null terminator to the end of the concatenated string */
	dest[dest_len + i] = '\0';

	return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	/* implementation here */
	int i;

	/* Copy up to n characters from src to the dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, pad dest with null terminators */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

int _strcmp(char *s1, char *s2)
{
	/* implementation here */
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (s1[i] - s2[i]);
}

char *_memset(char *s, char b, unsigned int n)
{
	/* implementation here */
	char *tst = s;

	while (n > 0)
	{
		*tst = b;
		tst++;
		n--;
	}

	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* implementation here */
	char *tst_dest = dest;
	char *tst_src = src;
	unsigned int arrmem = 0;

	while ((n > 0) && (arrmem < n))
	{
		arrmem++;
		tst_dest[arrmem] = tst_src[arrmem];
	}

	return (dest);
}

char *_strchr(char *s, char c)
{
	/* implementation here */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
	/* implementation here */
	unsigned int x, y;
	unsigned int sb_str_len = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}

		}

		if (accept[y] == '\0')
		{
			return (sb_str_len);
		}

		++sb_str_len;
	}

	return (sb_str_len);
}

char *_strpbrk(char *s, char *accept)
{
	/* implementation here */
	char *x, *y;

	for (x = s; *x != '\0'; x++)
	{
		for (y = accept; *y != '\0'; y++)
		{
			if (*x == *y)
			{
				return (x);
			}
		}
	}

	return (NULL);
}

char *_strstr(char *haystack, char *needle)
{
	/* implementation here */
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
