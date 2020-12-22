#include "monty.h"

/**
 *sub_function - Sub two elements of the stack
 *@head: Points to head
 *@line_num: Line number
 */

void sub_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (!temp || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	else
	{
		variables.head = variables.head->next;
		variables.head->n = variables.head->n - temp->n;
		free(temp);
	}
}


/**
 *div_function - Div two elements of the stack
 *@head: Points to head
 *@line_num: Line number
 */

void div_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;

	if (!temp || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}
	else
	{
		variables.head = variables.head->next;
		if (temp->n == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", line_num);
			free(temp);
			exit(EXIT_FAILURE);
		}
		variables.head->n = variables.head->n / temp->n;
		free(temp);
	}
}
