#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_node - insert a node at relative pos in a sorted linked list
 * @head: head of single linked list
 * @number: value of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (!*head || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
	}
	current = *head;
	while (current->next && current->next->n < new->n)
		current = current->next;
	new->next = current->next;
	current->next = new;
	return (new);
}
