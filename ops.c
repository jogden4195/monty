#include "monty.h"

/**
 * ops -  gets the function the opcode corresponds to.
 * @array: the array of args
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
		{NULL, NULL}
	};
        while (opcodes[i].opcode != NULL)
	{
		if (strcmp(array[0], opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line, array[0]);
	exit(EXIT_FAILURE);
}
