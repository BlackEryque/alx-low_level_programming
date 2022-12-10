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

	for (x = 'a'; x <= 'Z'; x++)
		putchar(x);

	putchar('\n');
}
