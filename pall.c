#include "monty.h"

/**
 * pall - prints all nodes of the stack
 * @stack: the stack we are printing
 * @line: the number of the line the instructions are on
 *
 * Return: None
 */

void pall(char *array __attribute__((unused)), unsigned int line)
{
	stack_t *current = *stack;

	if (!stack)
	{
		fprintf("L%d: invalid instruction\n", line);
		exit(EXIT_FAILURE);
	}
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
