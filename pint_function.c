#include "monty.h"

/**
 *pint_function - Print data on the top
 *@stack: Points to head
 *@line_num: Line number
 */

void pint_function(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)stack;

	if (!temp)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
