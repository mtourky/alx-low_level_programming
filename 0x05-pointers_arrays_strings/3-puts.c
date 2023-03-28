#include "main.h"

/**
 * _puts - print string, followed by new line
 *
 * @str: print string param
 *
 */

void _puts(char *str)
{
		while (*str != '\0')
		{
			putchar(*str + 0);
			str++;
		}
		putchar('\n');
}
