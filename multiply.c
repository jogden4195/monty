#include "monty.h"

/**
 * multiply - function that multiples two slack elements
 * @stack: pointer to head of stack
 * @line_number: number of current line
 */
void multiply(stack_t **stack, unsigned int line_number)
{
	int product = 0;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
line_number);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	product = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = product;
}
