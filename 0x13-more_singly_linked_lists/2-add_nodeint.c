#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a node to the beginning of a list
 * @head: The first element
 * @n: The integer
 * Return: The address of the new element otherwise return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *last;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (!head)
		return (NULL);
	if (head)
		last->next = *head;
	*head = last;
	return (last);
}
