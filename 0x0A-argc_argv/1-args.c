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
        (void) argv;
        printf("%d\n", argc - 1);
        return (0);
}
