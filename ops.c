#include "monty.h"

/**
 * get_ops -  gets the function the opcode corresponds to.
 * @stack: the stack we are editing
 * @line: current line number
 *
 * Returns: the function that the opcode corresponds to.
 */

void get_ops(stack_t **stack, unsigned int line)
{
	int i = 0;
	instruction_t opcodes[] = {
		{"push", push_n},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(element_t.str, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line, element_t.str);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
