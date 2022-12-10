#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lower case
 *
 * Return: 0
 *
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x, "\n");

	return (0);
}
