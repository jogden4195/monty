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
	int i;
	if (isnum(element_t.n) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		free(element_t.lineptr);
		fclose(element_t.fptr);
		exit(EXIT_FAILURE);
	}
	i = atoi(element_t.n);
	new_node->n = i;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	new_node->next = *stack;
	*stack = new_node;
}

/**
 * isnum - check if string is a number
 * @str: string to check
 * Return: 1 on success, 0 on failure
 */
int isnum(char *str)
{
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	if (str[i] == '-')
	{
		if (str[i + 1] == '\0')
			return (0);
		i++;
	}
	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
