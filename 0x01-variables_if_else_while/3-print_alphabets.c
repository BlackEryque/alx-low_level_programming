#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabetical letters
 *
 * Return: 0;
 *
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putcchar(x);

	putchar('\n');

	return (0);
}
