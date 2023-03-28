#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: stores the string variable
 *
 * Return: count for now
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
