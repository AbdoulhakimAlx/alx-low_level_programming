#include <stdio.h>
#include "main.h"

/**
 * swap_int - check your code
 *@a: the value to swap
 *@b: the valuw to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int Svar;

	Svar = *a;
	*a = *b;
	*b = Svar;
}
