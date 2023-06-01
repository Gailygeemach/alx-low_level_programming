#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: The head
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
