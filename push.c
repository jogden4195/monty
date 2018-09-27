#include "monty.h"

/**
 * push_n - function that adds a new node at the end of a doubly linked list
 * @stack: stack we are editing
 * @line_num: current line count
 * Return: void
 */
void push_n(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node;
	int n;

	if (element_t.n == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	n = element_t.n;
	new_node->n = n;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	new_node->next = *stack;
	*stack = new_node;
}
