#include "monty.h"

/**
 *swap_function - swaps the top two elements of the stack.
 *@head: Points to head
 *@line_num: Line number
 */

void swap_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (!temp || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	else
	{
		variables.head = variables.head->next;
		variables.head->prev = NULL;
		if (variables.head->next == NULL)
		{
			variables.head->next = temp;
			temp->next = NULL;
			temp->prev = variables.head;
		}
		else
		{
			temp->next = variables.head->next;
			variables.head->next->prev = temp;
			variables.head->next = temp;
			temp->prev = variables.head;
		}
	}
}
