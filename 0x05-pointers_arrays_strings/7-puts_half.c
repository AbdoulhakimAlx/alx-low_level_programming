#include "main.h"

/**
 * puts_half - to print half of sentemce
 * @str: pointer to an int
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');

}
