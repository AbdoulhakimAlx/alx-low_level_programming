#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of file
 * @argc: the number of agrs
 * @argv: argument lines
 * Return: Always success
 */

int main(int argc, char *argv[])
{

int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
