#include "lists.h"

/**
 * pop_listint - frees a list of ints
 * @head: adress of pointer to first node
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
