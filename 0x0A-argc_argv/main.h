/* Function_prototypes */
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int palindrome_helper(char *s, int start, int end);

int is_prime_recursive(int n, int divisor);

int sqrt_helper(int n, int i);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int is_prime_number(int n);

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

void swap_int(int *a, int *b);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

char *leet(char *);

/* Declaration of _strlen function */
int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

void reset_to_98(int *n);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);

/* Declare _isupper function */
int _isupper(int c);

/* Declare convert_day function */
int convert_day(int month, int day);

/* Declare print_remaining_days function */
void print_remaining_days(int month, int day, int year);

/* Declare largest_number function */
int largest_number(int a, int b, int c);

/* Declare positive_or_negative function */
void positive_or_negative(int i);

/* Declaration of _putchar function */
int _putchar(char c);

/* Declaration of print_alphabet function */
void print_alphabet(void);

/* Declaration of print_alphabet_x10 function */
void print_alphabet_x10(void);

/* Declaration of _islower function */
int _islower(int c);

/* Declaration of _isalpha(int c) */
int _isalpha(int c);

/*Declaration of print_sign function */
int print_sign(int n);

/* Declaration of _abs function */
int _abs(int);

/* Declaration of print_last_digit */
int print_last_digit(int);

/* Declaration of jack_bauer */
void jack_bauer(void);

/* Declaration of times_table */
void times_table(void);

/* Declaration of add */
int add(int, int);

/* Declaration of print_to_98 */
void print_to_98(int n);

/* Declaration of print_times_table */
void print_times_table(int n);
#endif /* MAIN_H */
