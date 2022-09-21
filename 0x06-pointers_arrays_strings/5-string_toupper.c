#include "main.h"

/**
 * string_toupper -> converting all char lowercase to uppercase
 * @x: is string parameter
 * Return: String
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
