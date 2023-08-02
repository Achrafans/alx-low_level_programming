#include "lists.h"

/**
 * pop_listint --- deletes the head node of linked list---
 * @head: ---pointer to the first element in the linked list---
 *
 * Return: the data inside the elements that was -deleted-,
 * or --0-- if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp1;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp1 = (*head)->next;
	free(*head);
	*head = temp1;

	return (num);
}

