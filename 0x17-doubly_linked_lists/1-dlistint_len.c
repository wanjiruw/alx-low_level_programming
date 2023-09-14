#include "lists.h"
/**
 *dlistint_len - shows number of elements in list
 *@h: pointer to the list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
