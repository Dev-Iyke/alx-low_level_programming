#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head;
		head = head->next;
		free(tempo->str);
		free(tempo);
	}

	free(head);
}
