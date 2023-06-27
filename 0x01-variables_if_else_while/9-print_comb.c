#include <stdio.h>

/**
 * main - prints combination of single digits
 * Return: always 0
 */

int main(void)
{
	int i = '0';


	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
