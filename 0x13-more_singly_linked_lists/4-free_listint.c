#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: listint_t list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
