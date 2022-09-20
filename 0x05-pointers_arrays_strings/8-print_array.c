#include "main.h"
#include <stdio.h>

/**
 * print_array - to print array
 *@a: pointer to int
 *@n: return value n
 * Return: Always return 0.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;

	}

	printf("\n");

}
