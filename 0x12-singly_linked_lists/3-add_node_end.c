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
	list_t *new_node, *current_node;
	size_t y;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (y = 0; str[y]; y++)
		new_node->len = y;
	new_node->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
