#include "monty.h"
/**
 * f_pop - prints the top
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_pop(stack_t **a_head, unsigned int the_counter)
{
	stack_t *the_head;

	if (*a_head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	the_head = *a_head;
	*a_head = the_head->next;
	free(the_head);
}
