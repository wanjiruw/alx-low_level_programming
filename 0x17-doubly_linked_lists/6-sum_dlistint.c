#include "lists.h"
/**
 *sum_dlistint - sum of all the data in linked list
 *@head: pointer to the head of a linked list
 *Return: sum of the data in a linked list, if empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
