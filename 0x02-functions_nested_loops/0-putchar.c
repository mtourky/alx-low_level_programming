#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using prototype
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
		_putchar(str[x]);
	_putchar('\n');

	return (0);
}
