#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: printing the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
