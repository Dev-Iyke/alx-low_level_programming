#include "lists.h"

/**
 * pop_listint - function that deletes the head of a linked list
 * @head: head to be deleted
 * Return: will return the deleted head or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
