#include "monty.h"

/**
 *pchar_function - Prints char at top of stack
 *@head: Points to head
 *@line_num: Line number
 */

void pchar_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (!temp)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	if (variables.head->n <= 0 || variables.head->n >= 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	else
	{
		putchar(variables.head->n);
		putchar(10);
	}
}
