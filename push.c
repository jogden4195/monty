#include "monty.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a doubly
 * linked list
 * @head: double pointer to doubly linked list
 * @n: integer value to assign n in the new node
 * Return: the address of the new node, of NULL if it failed
 */
void *push_n(stack_t **head, char **arr, unsigned int line_num)
{
	stack_t *new_node, *temp;

	if (sizeof(*arr) != 2 || !is_num(*arr[1]))
	{
		fprintf(stderr, "L<%u>: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	new_node = (stack_t *)malloc(sizeof(*head) * 8);
	if (!new_node)
	{
		fprintf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
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
}
int is_num (char **arr)
{
	while (*arr)
	{
		if (isdigit(*arr))
			continue;
		else
			return (0);
	}
	return (1);
}
