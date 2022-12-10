#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lower case
 *
 * Return: 0
 *
*/

int main(void)
{	
	for (int x = 'A'; x < "Z"; x++)
		putchar(tolower(x));
}			
