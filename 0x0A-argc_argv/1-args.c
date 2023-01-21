#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 *@argc: count of arguments
 *@argv: the arguments
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	if (argc  == 1)
		printf("%s\n", *argv);
	else
		printf("%d\n", argc - 1);
	return (0);
}
