#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list
 * @head: Pointer to head of the linked list
 * @index: Index of the node to retrieve from 0
 *
 * Return: Pointer to nth node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
