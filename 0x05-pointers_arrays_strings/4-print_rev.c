#include "main.h"

/**
 * print_rev - to print in reverse order
 * @s: pointer to  int
 *
 * Return: Always return 0.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
