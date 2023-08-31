#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while ((n < index) && head != NULL)
	{
		head = head->next;
		n++;
	}

	if (n == index)
		return (head);

	return (NULL);
}
