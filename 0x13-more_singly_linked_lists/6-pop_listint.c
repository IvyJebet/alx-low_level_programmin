#include "lists.h"

/**
 * pop_listint - Deletes the head node of linked list
 * then retuns its data
 * @head: Pointer to a pointer at the head of linked list
 *
 * Return: Data (n) of deleted head node, 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
