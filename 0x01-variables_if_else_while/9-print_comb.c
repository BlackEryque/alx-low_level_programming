#include <stdio.h>

/**
 * main - prints all combinations of single-digit
 *
 * Return: 0
 *
 */

int main(void)
{
	int x = 0;

	while (x <= '9')
		putchar (x);
		putchar (', ');
		x++;
	return (0);
}
