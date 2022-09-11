#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
int nbre;

for (nbre = 48; nbre <= 57; nbre++)
{
putchar (nbre);

if (nbre == 57)
{
break;
}

putchar (',');
putchar (' ');
}

putchar ('\n');

return (0);

}
