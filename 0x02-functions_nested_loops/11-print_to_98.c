#include "main.h"
/**
* print_to_98 - a function that prints all natural numbers from n to 98
* user input's number prints to 98, regardless < 98 or > 98
* @n: number input
* Return: void
*/
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
