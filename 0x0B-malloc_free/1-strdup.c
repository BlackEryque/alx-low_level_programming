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
	unsigned int szstr;
	int n;

	if (str == NULL)
		return (NULL);

	szstr = 0;

	while (str[szstr] != '\0')
		szstr += 1;
	cpy = malloc(sizeof(char) * szstr);

	for (n = 0; str[n] != '\0'; n++)
		cpy[n] = str[n];
	cpy[n] = '\0';
	return (cpy);
}
