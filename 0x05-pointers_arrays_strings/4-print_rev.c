#include "main.h"

/**
 * print_rev - reversed string followed by a line
 *
 * @s: pointer to string
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
