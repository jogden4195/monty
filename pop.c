#include "monty.h"

/**
 * pop - function to remove top element from a stack
 * @stack: pointer to head of stack
 * @line: current line number
 */
void pop(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
