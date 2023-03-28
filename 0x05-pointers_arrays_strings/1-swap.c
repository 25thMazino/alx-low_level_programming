#include "main.h"

/**
 * swap_int - swaps integer values
 *
 * @a: integer variable
 * @b: integer variable
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
