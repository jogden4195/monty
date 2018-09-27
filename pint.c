#include "monty.h"

/**
 * pint_n - function to print first value in stack
 * @stack: pointer to value stack
 * @line: curent line number
 */
void pint_n(stack_t **stack, unsigned int line)
{
	stack_t *head;

	head = *stack;

	if (head)
		fprintf(stdout, "%d\n", head->n);

	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}
