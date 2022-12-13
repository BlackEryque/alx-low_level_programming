#include <stdio.h>

/**
 * main - prints lowercase alphabetical letters in revers
 *
 * Return: 0
 *
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
