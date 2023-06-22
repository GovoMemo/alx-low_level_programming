#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @x: the number to be checked
 * Return: 1 for a digit character and 0 otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
