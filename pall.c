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
	stack_t *current;

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: invalid instruction\n", line);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	while (current != NULL)
	{
		fprintf(stdout, "%d\n", current->n);
		current = current->next;
	}
}
