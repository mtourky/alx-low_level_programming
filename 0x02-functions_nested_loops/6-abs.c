#include "main.h"

/**
 * Description: _abs - computes the absolute value of an integer.
 * @i: integer
 * Return: positive value
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}
