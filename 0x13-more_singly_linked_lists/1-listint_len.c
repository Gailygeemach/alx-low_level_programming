#include "lists.h"
#include <stdio.h>
/**
 * listint_len - A function that returns the number of elements in
 * a linked list
 * @h: The linked list
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t y;

	y = 0;
	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
