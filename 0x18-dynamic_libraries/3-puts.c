#include "main.h"

/**
 * _puts - function to print
 * @str: strings to print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	char *c;

	c = str;
	for (i = 0; c[i]; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
