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

	while (s1[s1c] !=  '\0')
		s1c++;

	while (s2[s2c] != '\0')
		s2c++;
	s2c++;

	s3c = s1c + s2c;

	conc = malloc(sizeof(char) * s3c);
	if (conc == 0)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		conc[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
		{
		conc[a] = s2[b];
		a++;
		}

	conc[a] = '\0';
	return (conc);
}
