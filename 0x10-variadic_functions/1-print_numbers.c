#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a program that prints numbers followed by a new line.
 * @seperator: string to be printed.
 * @n: number of integers.
 * @...: the variable
 * Return: If separator is NULL, don’t print it.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(nums);
}
