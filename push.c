#include "monty.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a doubly
 * linked list
 * @head: double pointer to doubly linked list
 * @n: integer value to assign n in the new node
 * Return: the address of the new node, of NULL if it failed
 */
stack_t *push_n(stack_t **head, const int n)
{
	stack_t *new_node, *temp;

	new_node = (stack_t *)malloc(sizeof(*head) * 8);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
