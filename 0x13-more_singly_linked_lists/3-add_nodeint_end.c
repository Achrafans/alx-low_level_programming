#include "lists.h"

/**
 * add_nodeint_end --- adds a node at the end of a linked list---
 * @head: ---pointer to the first element in the listt---
 * @n: data to insert in --the new element--
 *
 * Return: pointer to the new node, or --NULL-- if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neww1;
	listint_t *temp = *head;

	neww1 = malloc(sizeof(listint_t));
	if (!neww1)
		return (NULL);

	neww1->n = n;
	neww1->next = NULL;

	if (*head == NULL)
	{
		*head = neww1;
		return (neww1);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = neww1;

	return (neww1);
}

