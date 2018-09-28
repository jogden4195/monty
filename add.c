#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack that we are editing
 * @line_number: the current line number
 * Return: none
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
line_number);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n;
	pop(stack, line_number);
	sum += (*stack)->n;
	(*stack)->n = sum;
}
