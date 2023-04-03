#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temporary, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head address to temporary*/
	temporary = *head;
	/*get address of next node*/
	next = temporary->next;
	/*get element of first node*/
	first_node = temporary->n;

	/*free first node*/
	free(temporary);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (first_node);
}
