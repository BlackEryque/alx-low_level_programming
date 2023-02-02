#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - Prints contents of a linked list
 * @h: pointer to list
 *
 * Return: count
 */

size_t listint_len(const listint_t *h)
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
		path = path->next;
	}
	return (count);
}
