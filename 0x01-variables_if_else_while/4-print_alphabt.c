#include <stdio.h>
/**
 * main - print chars from a to z except q and e
 * Return:0
 **/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
