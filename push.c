#include "monty.h"
/**
 * f_push - add node to the stack
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_push(stack_t **a_head, unsigned int the_counter)
{
	int x, y = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", the_counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*a_head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", the_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*a_head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(a_head, x);
	else
		addqueue(a_head, x);
}
