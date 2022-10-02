#include <stdio.h>

/**
 * main - to print all args
 * @argc: numver of args
 * @argv: args
 *
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);

}
