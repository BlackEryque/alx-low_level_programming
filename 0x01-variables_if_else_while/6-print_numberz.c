#include <stdio.h>

/**
 * main - prints single numbers of base 10 fom 0, only using putchar
 * and without using putchar and without char variables.
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar((x % 10) + '0');
	x++;
	}
	putchar('\n');

	return (0);
}
