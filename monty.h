#ifndef _MONTY_H_
#define _MONTY_H_
#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef struct element_s
{
	char *n;
	char *str;
} element_g;
extern element_g element_t;
element_g element_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push_n(stack_t **stack, unsigned int line);
void get_line(stack_t **stack, const char *filename);
int arg_count(char *str);
void tokenize(char *str);
void pall(stack_t **stack, unsigned int line);
void get_ops(stack_t **stack, unsigned int line);
void pint(stack_t **stack, unsigned int line __attribute__((unused)));
void pop(stack_t **stack, unsigned int line);
void swap(stack_t **stack, unsigned int line);
void add(stack_t **stack, unsigned int line);
void free_stack(stack_t **stack);
void nop(stack_t **stack, unsigned int line);
int isnum(char *str);

#endif /* _MONTY_H_ */
