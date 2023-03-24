#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: variable paramater
 *
 * Return: 1 for digits else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
