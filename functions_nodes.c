#include "monty.h"
/**
 * free_stack - Frees nodes in the stack
 */
void free_stack (void)                     {
	stack_s *tmp;

	if (head == NULL)
		return (NULL)

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}

/**
 * get_node - Creates a node with a value
 *@n: Value of the new node
 * Return: Pointer to node.
 */
stack_t get_node (int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node)
}

