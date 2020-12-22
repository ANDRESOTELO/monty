#include "monty.h"

/**
 *pint_function - Print data on the top
 *@head: Points to head
 *@line_num: Line number
 */

void pint_function(stack_t **head, unsigned int line_num)
{
	if (!*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
