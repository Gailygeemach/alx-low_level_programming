#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: The pointer
 * @index: The index of the node
 * Return: The located node otherwise return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index && head != NULL; z++)
	{
		head = head->next;
	}
	return (head);
}
