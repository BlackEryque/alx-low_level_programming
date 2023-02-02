#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Prints contents of a linked list
 * @h: pointer to list
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *path;

	count = 0;
	if (h == NULL)
		printf("The list is empty");
	path = NULL;
	path = h;
	while (path != NULL)
	{
		count++;
		printf("%d\n", path->n);
		path = path->next;
	}
	return (count);
}
