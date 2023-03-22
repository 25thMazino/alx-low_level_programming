#include "main.h"

/**
 * _abs - function for absolute value
 *
 * @a: parameter function
 *
 * Return: let it be a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
