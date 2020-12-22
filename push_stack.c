#include "monty.h"

/**
 *push_stack - Add node in struct
 *@head: Point to head of struct
 *@line_num: Line number
 */

void push_stack(stack_t **head, unsigned int line_num)
{
	stack_t *new_node = NULL;
	char *num = NULL; /*Data in struct*/
	int n = 0;
	(void)head;

	num = strtok(NULL, " ");

	if (num == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		want_to_be_free();
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		want_to_be_free();
		exit(EXIT_FAILURE);
	}

	n = atoi(num);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (variables.head == NULL)
	{
		variables.head = new_node;
	}
	else
	{
		new_node->next = variables.head;
		variables.head->prev = new_node;
		variables.head = new_node;
	}
}
