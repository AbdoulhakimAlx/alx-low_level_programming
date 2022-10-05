#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function to create an array
 * @size: size of an array
 * @c: variable
 * Return: pointer to array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);

}
