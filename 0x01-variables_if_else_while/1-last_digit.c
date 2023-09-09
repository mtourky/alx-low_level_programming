#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main entry point
 *
 * Description: function to check the last number vs some rules
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
		printf("Last digit of %d is %d and is greater than 5", n, k);
	else if (k == 0)
		printf("Last digit of %d is %d and is 0", n, k);
	else if (k < 6 && k != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, k);
	return (0);
}
