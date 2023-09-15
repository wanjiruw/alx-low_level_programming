#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a new node at a given position
 *@h: a pointer to a pointer to the head of a linked list
 *@idx: index where new node should be added. Index starts at 0
 *@n: integer to be stored in the new node
 *Return: NULL if failed, return new node if succesful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
			break;
		count++;
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
