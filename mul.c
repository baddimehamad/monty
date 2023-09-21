#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_mul(stack_t **a_head, unsigned int the_counter)
{
	stack_t *the_head;
	int l = 0, aux;

	the_head = *a_head;
	while (the_head)
	{
		the_head = the_head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	the_head = *a_head;
	aux = the_head->next->n * the_head->n;
	the_head->next->n = aux;
	*a_head = the_head->next;
	free(the_head);
}
