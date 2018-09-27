#include "monty.h"

/**
 * free_stack - function to free stack
 * @stack: pointer to value stack
 */
void free_stack(stack_t **stack)
{
	stack_t *head;

	head = *stack;

	while(head)
	{
		free(head);
		head = head->next;
	}
}
