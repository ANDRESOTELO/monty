#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

/**
 *struct variable_s - global variables
 *@monty_file: File descriptor
 *@buffer: buffer
 *@head: pointer to head
 *
 *Description: global variables
 */

typedef struct variable_s
{
	FILE *monty_file;
	char *buffer;
	stack_t *head;
} variable_t;

extern variable_t variables;
variable_t variables;

/*Get line in the struct*/
void get_function(unsigned int line_num);

/*Free struct*/
void want_to_be_free(void);

/*Push in stack*/
void push_stack(stack_t **head, unsigned int line_num);

/*Print value in monty file that was pushed*/
void pall_function(stack_t **head, unsigned int line_num);

/*Print value in the top of stack*/
void pint_function(stack_t **head, unsigned int line_num);

/*Removes the top of stack*/
void pop_function(stack_t **head, unsigned int line_num);

/*swaps the top two elements of the stack*/
void swap_function(stack_t **head, unsigned int line_num);

/*Adds the top two elements of the stack*/
void add_function(stack_t **head, unsigned int line_num);

/*Nop function, the function doesn´t do anything*/
void nop_function(stack_t **head, unsigned int line_num);

/*Sub the top element with the second element*/
void sub_function(stack_t **head, unsigned int line_num);



#endif /* _MONTY_H_ */
