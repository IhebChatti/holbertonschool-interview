#include "lists.h"

/**
 * check_cycle - a function that checks if a SLL has a cycle in it
 * @list: linked list head
 *
 * Return: 1 if there is a cycle, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = fast = list;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast  = fast->next->next;
		if (slow == fast)
			return (1);
		}
	return (0);
}
