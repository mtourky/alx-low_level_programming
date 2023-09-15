#include "main.h"

/**
 * _islower - function checks for lowercase character
 *
 * @c: input arg
 *
 * Description: function that checks for lowercase
 *
 * Return: 1 if c is lower or 0 otherwise
 */

int _islower(int c)
{
	if (c == 97 && c <= 122)
		return (1);
	return (0);
}
