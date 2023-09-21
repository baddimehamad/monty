#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_pstr(stack_t **a_head, unsigned int the_counter)
{
	stack_t *the_head;
	(void)the_counter;

	the_head = *a_head;
	while (the_head)
	{
		if (the_head->n > 127 || the_head->n <= 0)
		{
			break;
		}
		printf("%c", the_head->n);
		the_head = the_head->next;
	}
	printf("\n");
}
