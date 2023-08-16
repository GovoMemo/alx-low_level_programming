#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - a program that prints a result of the operation.
 * @argc: number og arguments.
 * @argv: an array.
 * Return: always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numA, numB;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	numA = atoi(argv[1]);
	op = argv[2];
	numB = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && numB == 0) || (*op == '%' && numB == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(numA, numB));
	return (0);
}
