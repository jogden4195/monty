#include "monty.h"

/**
 * get_ops -  gets the function the opcode corresponds to.
 * @stack: the stack we are editing
 * @line_number: current line number
 *
 * Return: the function that the opcode corresponds to.
 */

int get_ops(stack_t **stack, unsigned int line_number)
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
			opcodes[i].f(stack, line_number);
			return (1);
		}
		i++;
	}
	return (0);
}
