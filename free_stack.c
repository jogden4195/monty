#include "monty.h"

/**
 * free_stack - function to free stack
 * @stack: pointer to value stack
 */
void free_stack(stack_t **stack)
{
	stack_t *head;

	while (*stack)
	{
		head = *stack;
		*stack = (*stack)->next;
		free(head);
	}
}
