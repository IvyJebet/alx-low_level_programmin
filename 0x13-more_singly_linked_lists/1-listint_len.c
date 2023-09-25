#include "lists.h"

/**
 * listint_len - Returns all the number of elements in a linked list
 * @h: Pointer pointing to the head of the linked list
 *
 * Return: Number of the nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
