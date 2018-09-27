#include "monty.h"

/**
 * pop - funciton to remove top element from a stack
 * @stack: pointer to head of stack
 * @line: current line number
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *head;

	head = *stack;
	if (head == NULL)
	{
		fprintf(stderr, "L%u:  can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	if (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
	else
	{
		free (head);
		head = NULL;
	}
}
