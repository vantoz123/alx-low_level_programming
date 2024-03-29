#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *q;
	listint_t *n;

	q = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = q;
		q = *head;
		*head = n;
	}

	*head = q;
	return (*head);
}
