#include "main.h"

/**
 * print_square - prints squares
 *
 * @size - variable parameter
 *
 * Return: 0
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				__putchar(35);
			}
			_putchar('\n');
		}
	}
}
