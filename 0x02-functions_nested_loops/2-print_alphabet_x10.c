#include "main,h"

/**
 * main - Entry point
 * print_alphabet_x10 times using the lowercases
 * followed by new line 
 */

void print_alphabet_x10(void)

{
	char ch;
	int i;

	i = o;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
