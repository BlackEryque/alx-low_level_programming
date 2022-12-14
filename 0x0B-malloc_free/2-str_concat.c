#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concats two lines
 *@s1: first string
 *@s2: second string
 *
 *Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int s1c = 0; /*s1 length*/
	int s2c = 0;
	int s3c;
	int a;
	int b;

	if (s1 != NULL)
	{
		while (s1[s1c] !=  '\0')
			s1c++;
	}

	if (s2 != NULL)
	{
		while (s2[s2c] != '\0')
			s2c++;
	}

	s3c = s1c + s2c;

	conc = (char *)malloc(sizeof(char) * (s3c + 1));
	if (conc == NULL)
		return (NULL);

	for (a = 0; a < s1c; a++)
		conc[a] = s1[a];
	for (b = 0; b < s2c; b++, a++)
		conc[a] = s2[b];

	conc[a] = '\0';
	return (conc);
}
