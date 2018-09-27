#include "monty.h"

/**
 * push_n - function that adds a new node at the end of a doubly linked list
 * @head: double pointer to doubly linked list
 * @arr: string array
 * @line_num: current line count
 * Return: void
 */
void push_n(stack_t **stack, unsigned int line_num)
{
	
	stack_t *new_node, *temp;
	int n;
	
	if (element_counter() != 2) /* || is_num(arr[1]) == 0) */
	{
		fprintf(stderr, "L<%u>: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Passed malloc\n");
	n = atoi(array[1]);
	new_node->n = atoi(array[1]);
	new_node->next = NULL;
	printf("Almost there hoe\n");
	if (!(stack))
	{
		printf("ayyyyyyyyyye\n");
		new_node->prev = NULL;
		printf("I found you miss new booty\n");
		printf("new node n = %d\n", new_node->n);
		*stack = new_node;
		printf("Bitch we made it\n");
	}
	else
	{
	  printf("yo yo yo\n");
		temp = *stack;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
}

/**
 * element_counter - counts the number of elements in the array
 * @arr: the array whose elements we are counting
 * Return: number of elements in the array
 */
int element_counter(void)
{
	int count = 0;
	while (array[count])
		count++;
	return count;
}
