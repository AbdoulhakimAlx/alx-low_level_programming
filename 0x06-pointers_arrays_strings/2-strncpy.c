#include <string.h>
#include "main.h"

/**
 * _strncpy - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
