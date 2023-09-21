#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_div(stack_t **a_head, unsigned int the_counter)
{
	stack_t *the_head;
	int len = 0, aux;

	the_head = *a_head;
	while (the_head)
	{
		the_head = the_head->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	the_head = *a_head;
	if (the_head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	aux = the_head->next->n / the_head->n;
	the_head->next->n = aux;
	*a_head = the_head->next;
	free(the_head);
}
