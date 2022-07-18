#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: a pointer to a pointer to head.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - free a struct linked list
 *
 * @head: first element
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
	{
		return;
	}
	new = *head;
	*head = NULL;
	free_listint(new);
}
