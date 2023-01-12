#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that copies a string
 *@str: the string to be copied
 *
 *Return: Nothing
 */


char *_strdup(char *str)
{
	char *cpy;
	int szstr;
	int n;

	szstr = 0;

	while (str[szstr] != '\0')
		szstr += 1;
	cpy = malloc(sizeof(char) * szstr);

	if (cpy == 0)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		cpy[n] = str[n];
	cpy[n] = '\0';
	return (cpy);
}
