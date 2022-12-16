#include "main.h"

/**
 *_isalpha - checks for a alphabetical letters
 *
 *@c: character to be evaluated
 *
 *Return: 0
 */

int _isalpha(int c)
{
	int x = isalpha(c);

	if (x > 0)
		return (1);
	else
		return (0);
}
