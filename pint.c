#include "monty.h"

/**
 * pint - function to print first value in stack
 * @stack: pointer to value stack
 * @line_number: curent line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;

	if (head)
		printf("%d\n", head->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
}
