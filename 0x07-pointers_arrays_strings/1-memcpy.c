#include "main.h"

/**
 * _memcpy - a function that copies area of a memory
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: changed byte and copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
