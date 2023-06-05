#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: adress of pointer to first node
 *
 * Return: value of propped node
 */

int pop_listint(listint_t **head)
{
	if (!head || !(*head))
		return (0);

	listint_t *temp = *head;
	int num = temp->n;

	*head = temp->next;
	free(temp);

	return (num);
}
