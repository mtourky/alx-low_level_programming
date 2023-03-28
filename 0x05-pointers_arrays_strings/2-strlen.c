#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: the string that the function return
 *
 * Return: the length of s
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
