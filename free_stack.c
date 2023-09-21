#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @a_head: head of the stack
*/
void free_stack(stack_t *a_head)
{
	stack_t *aux;

	aux = a_head;
	while (a_head)
	{
		aux = a_head->next;
		free(a_head);
		a_head = aux;
	}
}
