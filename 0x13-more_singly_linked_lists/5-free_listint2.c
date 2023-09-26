#include "lists.h"

/**
 * free_listint2 - Frees a linked list then sets the head pointer as NULL
 * @head: Pointer to a pointer at the top of a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
