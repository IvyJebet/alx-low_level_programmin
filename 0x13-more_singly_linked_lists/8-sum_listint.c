#include "lists.h"

/**
 * sum_listint - Computes sum of all the data (n) in the linked list
 * @head: Pointer to head of the linked list
 *
 * Return: Sum of all the data, 0     if list is  empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head !=  NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
