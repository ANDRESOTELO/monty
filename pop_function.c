#include "monty.h"

/**
 *pop_function - Remove the top element
 *@head: Points to head
 *@line_num: Line number
 */

void pop_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	variables.head = variables.head->next;
	free(temp);
}
