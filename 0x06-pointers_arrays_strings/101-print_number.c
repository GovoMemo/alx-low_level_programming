#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int nun = n;

	if (n < 0)
	{
		_putchar('-');
		nun = -nun;
	}
	if ((nun / 10) > 0)
		print_number(nun / 10);
	_putchar((nun % 10) + '0');
}
