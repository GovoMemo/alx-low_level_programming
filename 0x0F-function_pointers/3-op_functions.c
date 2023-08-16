#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a program that returns the sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a program that returns the difference of 2 numbers
 * @a: first number.
 * @b: second number
 * Return: the difference of two numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a program that returns the multiplication of 2 numbers
 * @a: first number.
 * @b: second number.
 * Return: multiplication of two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a program that returns the division of 2 numbers
 * @a: first number
 * @b: second number.
 * Return: the division of two numbers.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a program that returns the remainder of the division
 * of 2 numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the remainder of the division of two numbers.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
