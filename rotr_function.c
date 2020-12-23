#include "monty.h"

/**
 *rotr_function - rotates the stack to the bottom.
 *@head: Points to head
 *@line_num: Line number
 */

void rotr_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	int temp2 = 0;
	(void)head;
	(void)line_num;

	while (temp)
	{
		if (temp->next == NULL)
		{
			temp2 = temp->n;
			break;
		}
		temp = temp->next;
	}
	while (temp)
	{
		if (!temp->prev)
		{
			temp->n = temp2;
			break;
		}
		temp->n = temp->prev->n;
		temp = temp->prev;
	}
}
