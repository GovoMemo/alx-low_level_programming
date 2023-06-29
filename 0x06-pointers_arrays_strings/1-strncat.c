#include "main.h"
#include <stdio.h>

/**
 * _strncat - links two strings
 * @dest: input 1
 * @src: input w2
 * @n: number of bytes
 * Return: a pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
		while (dest[i] != '\0')
		{
			i++;
		}
	j = 0;
		while (j < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
