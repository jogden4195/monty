#include "monty.h"

/**
 * ops -  gets the function the opcode corresponds to.
 * @array: the array of args
 * @line: current line number
 * 
 * Returns: the function that the opcode corresponds to.
 */

void get_ops(char *array, unsigned int line)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push_n(array, line)},
		{"pall", pall(array, line)},
		{NULL, NULL}
	}

        while (opcodes[i].opcode)
	{
		if (strcmp(array[0], opcodes[i].opcode) == 0)
		  return(opcode[i].f)
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line, array[0]);
	exit(EXIT_FAILURE);
}
