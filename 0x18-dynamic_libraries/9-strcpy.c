#include "main.h"

/**
 * _strcpy - copies string
 * @dest: ponits to a char
 * @src: a pointer to a char that may be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
