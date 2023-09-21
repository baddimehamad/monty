#include "monty.h"
/**
  *f_sub- sustration
  *@a_head: stack head
  *@the_counter: line_number
  *Return: null return
 */
void f_sub(stack_t **a_head, unsigned int the_counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *a_head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	aux = *a_head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*a_head = aux->next;
	free(aux);
}
