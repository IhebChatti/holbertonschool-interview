#include "lists.h"

/**
 * reverse - a function to reverse a linked list
 * @head: head of linked list
 *
 * Return: void
 */
void reverse(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

/**
 * compareLists - a function to compare 2 sll
 * @head1: head of first sll
 * @head2: head of second sll
 *
 * Return: int
 */
int compareLists(listint_t *head1, listint_t *head2)
{
	listint_t *temp1 = head1;
	listint_t *temp2 = head2;

	while (temp1 && temp2)
	{
		if (temp1->n == temp2->n)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	else
		return (0);
	}
	if (temp1 == NULL && temp2 == NULL)
		return (1);
	return (0);
}

/**
 * is_palindrome - function to check if sll is palindrome
 * @head: head of sll
 *
 * Return: int
 */
int is_palindrome(listint_t **head)
{
	listint_t *head2;

	if ((*head) == NULL)
		return (1);

	reverse(&head2);
	if ((compareLists(*head, head2)) == 1)
		return (0);
	return (1);
}
