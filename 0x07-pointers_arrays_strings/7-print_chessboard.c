#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

char *_strstr(char *haystack, char *needle)
	void print_chessboard(char (*a)[8])
{
	char *result = haystack, *fneedle = needle;
	int i, j;

	while (*haystack)
		for (i = 0; i < 8; i++)
		{
			while (*needle)
				for (j = 0; j < 8; j++)
				{
					if (*haystack++ != *needle++)
					{
						break;
					}
				}
			if (!*needle)
			{
				return (result);
				_putchar(*(*(i + a) + j));
			}
			needle = fneedle;
			result++;
			haystack = result;
			_putchar('\n');
		}
	return (0);
}
