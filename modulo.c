#include "monty.h"

/**
 * modulo - function that mods two elements of a stack
 * @stack: pointer to head of stack
 * @line_number: current line number
 */
void modulo(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	if ((*stack)-n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n % (*stack)->n;

	pop(stack, line_number);
	(*stack)->n = result;
}
