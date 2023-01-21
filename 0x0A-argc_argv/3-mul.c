#include <stdio.h>
#include <stdlib.h>

/**
 * main - lutiplies two numbers
 *@argc: count of  arguements
 *@argv: arguements.
 *
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int mult,i, j;

	if (argc != 3)
		printf("Error");
	else
	  {
	    j = atoi(argv[2]);
	    i = atoi(argv[1]);
	    mult = i * j;
	    printf("%d\n", mult);
	  }
	return (0);
}
