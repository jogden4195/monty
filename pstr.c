#include "monty.h"

/**
 * pstr - prints the string starting at the top
 * of the stack, followed by a new line.
 * @stack: The stack we are going through
 * @line: The current line number
 * Return: None
 */
void pstr(stack_t **stack, unsigned int line)
{
	char c;

	if (*stack == NULL)
	{
		nop(stack, line);
		return;
	}
	while (*stack != NULL)
	{
		if ((*stack)->n == 0)
			break;
		else if ((*stack)->n > 0 && (*stack)->n <= 127)
		{
			c = (*stack)->n;
			printf("%c", c);
		}
		else
		{
			fprintf(stderr, "L%u: can't pstr, value out of range\n", line);
			free_stack(stack);
			free(element_t.lineptr);
			fclose(element_t.fptr);
			exit(EXIT_FAILURE);
		}
		*stack = (*stack)->next;
	}
	printf("\n");
} 

