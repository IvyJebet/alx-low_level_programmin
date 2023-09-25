#include "lists.h"

/**
 * add_nodeint - Adds new node at the top of the linked list
 * @head: Pointer to a pointer to the head of the linked list
 * @n: Integer to input as the data of the new node
 *
 * Return: Address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
