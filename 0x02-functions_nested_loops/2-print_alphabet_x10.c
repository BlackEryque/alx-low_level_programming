#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabets
 *
 *
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char s;

	while (x <= 9)
	{
		for (s = 'a'; s <= 'z'; s++)
			_putchar (s);

		putchar ('\n');

		x++;
	}
}
