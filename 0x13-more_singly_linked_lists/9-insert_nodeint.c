#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at a given point
 * in the linked list
 * @head: Pointer to a pointer at the head of a linked list
 * @idx: Index where new node should be inserted from 0
 * @n: Integer data to be stored in new node
 *
 * Return: Address of new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int count = 0;


	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	temp = *head;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
}
