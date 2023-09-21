#include "monty.h"
/**
 * f_queue - prints the top
 * @a_head: stack head
 * @the_counter: line_number
 * Return: null return
*/
void f_queue(stack_t **a_head, unsigned int the_counter)
{
	(void)a_head;
	(void)the_counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @a_head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **a_head, int n)
{
	stack_t *new_node, *aux;

	aux = *a_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*a_head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
