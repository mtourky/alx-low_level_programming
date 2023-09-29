#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int r, c;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
