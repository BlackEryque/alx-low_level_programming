#include "main.h"

/**
 *print_to_98 - prints all natural numbers from the variable input
 *
 *@n: variable to be used
 *
 */

void print_to_98(int n)
{
	int y;

	for (y = n; y <= 98; y++)
	{
		printf("%d, ", y);

	}
	_putchar('\n');
}
