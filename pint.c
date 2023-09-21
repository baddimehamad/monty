#include "monty.h"
/**
 * f_pint - prints the top
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_pint(stack_t **a_head, unsigned int the_counter)
{
	if (*a_head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*a_head)->n);
}
