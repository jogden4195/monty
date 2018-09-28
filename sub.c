#include "monty.h"

/**
 * subtract - function that subtracts the top element value from the second
 * top element of the stack
 * @stack: stack that is being changed
 * @line_number: current line number
 */
void subtract(stack_t **stack, unsigned int line_number)
{
	int diff = 0;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_SUCCESS);
	}

	diff = (*stack)->next->n - (*stack)->n;

	(*stack)->next->n = diff;
	pop(stack, line_number);
}
