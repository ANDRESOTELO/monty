#include "monty.h"

/**
 *pall_function - Print data of monty instruction
 *@head: Point to head of struct
 *@line_num: Line number
 */

void pall_function(stack_t **head, unsigned int line_num)
{
	stack_t *temp = variables.head;
	(void)head;
	(void)line_num;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
