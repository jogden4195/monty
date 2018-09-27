#include "monty.h"

/**
 * pall - prints all nodes of the stack
 * @stack: the stack we are printing
 * @line: the number of the line the instructions are on
 *
 * Return: None
 */

void pall(stack_t **stack, unsigned int line)
{
	stack_t *current = *stack;

	if (!current)
	{
		fprintf(stderr, "L%d: invalid instruction\n", line);
		exit(EXIT_FAILURE);
	}
	while (current)
		current = current->next;
}
