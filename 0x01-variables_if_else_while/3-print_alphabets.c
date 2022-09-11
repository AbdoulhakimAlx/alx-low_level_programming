#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch_alph;

	for (ch_alph = 'a'; ch_alph <= 'z'; ch_alph++)
		putchar(ch_alph);
	for (ch_alph = 'A'; ch_alph <= 'Z'; ch_alph++)
		putchar(ch);
	putchar('\n');
	return (0);
}
