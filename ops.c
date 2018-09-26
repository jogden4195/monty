#include "monty.h"

/**
 * ops -  gets the function the opcode corresponds to.
 * @opcode: the opcode found within the file
 * 
 * Returns: the function that the opcode corresponds to.
 */

void get_ops(stack_tchar **array)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push_n(stack_t, int)},
		{"pall", pall(stack_t, int)},
		{NULL, NULL}
	}

	if (sizeof(array) < 1)
		exit(EXIT_FAILURE);
        while (opcodes[i].opcode)
	{
		if (strcmp(array[0], opcodes[i].opcode) == 0)
		  return(opcode[i].f))        
	}
	
}

