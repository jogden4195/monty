#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack that we are editing
 * @line: the current line number
 * Return: none
 */

void add(stack_t **stack, unsigned int line)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n;
	pop(stack, line);
	sum += (*stack)->n;
	(*stack)->n = sum;
}
