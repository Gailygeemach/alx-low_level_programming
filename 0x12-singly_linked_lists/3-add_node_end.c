#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 * at the end of a list
 * @head: The head
 * @str: The string
 * Return: The address of the new element otherwise return NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t y;

	y = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[y])
		y++;
	new_node->len = y;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
