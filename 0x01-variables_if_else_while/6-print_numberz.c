#include <stdio.h>
/**
 * main - print digit number from 0 to 10
 * Return:0
 **/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
