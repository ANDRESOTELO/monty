#include "monty.h"

/**
 *add_function - Add two elements of the stack
 *@head: Points to head
 *@line_num: Line number
 */

void add_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (!temp || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	else
	{
		variables.head = variables.head->next;
		variables.head->n = variables.head->n + temp->n;
		free(temp);
	}
}
