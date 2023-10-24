#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
