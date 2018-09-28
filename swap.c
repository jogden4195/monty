#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack we are editing
 * @line: the current line number
 */

void swap(stack_t **stack, unsigned int line)
{
	int i;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = i;
}
