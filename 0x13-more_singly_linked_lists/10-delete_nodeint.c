#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given point in the list
 * @head: Pointer to a pointer at the head of linked list
 * @index: Index the node is to delete from 0
 *
 * Return: 1 if deletion succeeds, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
