#include <stdio.h>

/**
 * main - main function
 *
 * Return: be 0 at times
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	return (0);
}
