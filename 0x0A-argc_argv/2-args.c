#include "main.h"
#include <stdio.h>

/**
 * main - prints number of programme
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Be 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
