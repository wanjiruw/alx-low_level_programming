#include "lists.h"
/**
 *get_dnodeint_at_index - returns thr nth node
 *@head: pointer to the head
 *@index: index node to retrieve, starting from 0
 *Return: NULL if does not exist, otherwise return a pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
