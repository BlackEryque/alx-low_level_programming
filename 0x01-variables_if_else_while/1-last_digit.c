#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - returns last digit of number
 *
 * Return: 0
 *
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x == 0)
		printf(" and is 0\n");
	else if (x > 5)
		printf(" and is greater than 5\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
