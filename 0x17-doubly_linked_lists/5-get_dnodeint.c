#include "lists.h"

/**
 * get_dnodeint_at_index - search a specific node of a double linked list
 * @head: pointer to the beginning of double list
 * @index: index of the node to find
 *
 * Return: pointer to the indexed node, or NULL on failure
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
