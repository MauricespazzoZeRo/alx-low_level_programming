#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	int add;
	add = (a + b);
	return (add);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	int sub;
	sub = (a - b);
	return (sub);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	int mul;
	mul = (a * b);
	return (mul);
}

/**
 * op_div - returns the result of the division of a by b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	int div;
	div = (a / b);
	return (div);
}

/**
 * op_mod - returns the remainder of the division of a by b
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	int mod;
	mod = (a % b);
	return (mod);
}
