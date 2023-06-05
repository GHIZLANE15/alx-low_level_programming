#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: double pointer to the listint_t list to be freed
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}

	*head = NULL;
}
