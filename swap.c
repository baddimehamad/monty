#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_swap(stack_t **a_head, unsigned int the_counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	h = *a_head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
