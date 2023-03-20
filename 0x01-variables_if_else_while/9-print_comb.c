#include <stdio.h>

/**
 * main - main function
 *
 * Return: be 0 at times
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
