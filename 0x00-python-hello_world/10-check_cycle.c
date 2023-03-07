#include "lists.h"

/**
 * check_cycle - checks for a loop in linked list
 * @list: the head node passed
 * Return: O on success, 1 on error
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = NULL;
	listint_t *slow = NULL;

	if (!list || !list->next)
		return (0);
	slow = list;
	fast = list->next;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
