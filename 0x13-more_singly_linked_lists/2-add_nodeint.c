#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: the list
 * @n: variable to be added
 *
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	free(newnode);
}
