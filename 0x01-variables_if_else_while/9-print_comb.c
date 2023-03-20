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
		if (i == 9)
			putchar(i + '0');
		else
		{	
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
