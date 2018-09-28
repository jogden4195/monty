#include "monty.h"

/**
 * pchar - prints first char value in stack
 * @stack: pointer to value stack
 * @line: current line number
 */
void pchar(stack_t **stack, unsigned int line)
{
	char c;

	if (*stack)
	{
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
		{
			c = (*stack)->n;
			printf("%c\n", c);
		}
		else
		{
		  fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
		  free_stack(stack);
		  free(element_t.lineptr);
		  fclose(element_t.fptr);
		  exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
}
