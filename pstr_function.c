#include "monty.h"

/**
 *pstr_function - Prints string at top of stack
 *@head: Points to head
 *@line_num: Line number
 */

void pstr_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;
	(void)line_num;

	while (temp && temp->n > 0 && temp->n <= 127)
	{
		putchar(temp->n);
		temp = temp->next;
	}
	putchar(10);
}
