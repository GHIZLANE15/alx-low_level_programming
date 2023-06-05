#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: pointer to the first node in the linked list
 * @index: index of the node to get
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp != NULL ? temp : NULL);
}
