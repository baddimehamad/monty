#include "monty.h"
/**
 * f_pall - prints the stack
 * @a_head: stack head
 * @the_counter: no used
 * Return: null return
*/
void f_pall(stack_t **a_head, unsigned int the_counter)
{
	stack_t *the_head;
	(void)the_counter;

	the_head = *a_head;
	if (the_head == NULL)
		return;
	while (the_head)
	{
		printf("%d\n", the_head->n);
		the_head = the_head->next;
	}
}
