#include "monty.h"

/**
 * pall - prints all nodes of the stack
 * @stack: the stack we are printing
 * @line_number: the number of the line the instructions are on
 *
 * Return: None
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
