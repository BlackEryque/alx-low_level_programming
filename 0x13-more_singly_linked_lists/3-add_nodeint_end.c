#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the beginning of a list
 * @head: the list
 * @n: variable to be added
 *
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *newhead;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		printf("Failed to allocate");
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newhead = *head;
	while (newhead->next != NULL)
		newhead = newhead->next;
	newhead->next = newnode;
	return (newnode);
	free(newnode);
}
