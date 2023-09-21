#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_mod(stack_t **a_head, unsigned int the_counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *a_head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	h = *a_head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*a_head = h->next;
	free(h);
}
