#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int x = 0;
	char y;

	while (x < 10)
	{
		putchar ((x % 10) + '0')

		x++;
	}
	for (y = 'a'; y <= 'f'; y++;)
	{
		putchar (y);
	}
	putchar ('\n');
	return (0);
}

