#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Description: the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int l;
	int ci;

	for (l = 0; l <= 9; l++)
	{
		for (ci = 'a'; ci <= 'z'; ci++)
			_putchar(ci);
		_putchar('\n');
	}
}
