#include "main.h"

/**
 * Description: print_last_digit - prints the last digit of a number.
 * @c: integer
 * Return: last digit of a number
 */

int print_last_digit(int c)
{
    int last_digit;

    last_digit = c % 10;

    if (last_digit < 0)
        last_digit *= -1;
    _putchar(last_digit + '0');
    return (last_digit);
}