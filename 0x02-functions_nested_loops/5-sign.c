#include "main.h"

/**
 * Description: print_sign - print + , 0 , - depend on values
 * @n: single character
 * Return: 1 , 0 , -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
