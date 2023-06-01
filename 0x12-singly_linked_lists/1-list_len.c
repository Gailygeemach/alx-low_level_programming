#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that shows the number of elements in a list
 * @h: The pointer
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
