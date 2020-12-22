#include "monty.h"

/**
 *rotl_function - Add two elements of the stack
 *@head: Points to head
 *@line_num: Line number
 */

void rotl_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	int temp2 = 0;
	(void)head;
	(void)line_num;

	if (temp)
	{
		temp2 = variables.head->n;
	}
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->n = temp2;
			break;
		}
		else
		{
			temp->n = temp->next->n;
			temp = temp->next;
		}
	}
}
