#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 * of a list
 * @head: Original linked list
 * @str: The string
 * Return: The address of the new element otherwise return NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int length;

	length = 0;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	while (str[length])
		length++;
	ptr->len = length;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
