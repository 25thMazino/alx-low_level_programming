#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 args
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[1]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
