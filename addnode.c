#include "monty.h"
/**
 * addnode - add node to the head stack
 * @a_head: head of the stack
 * @n: new_value
 * Return: null return
*/
void addnode(stack_t **a_head, int n)
{

	stack_t *the_new_node, *aux;

	aux = *a_head;
	the_new_node = malloc(sizeof(stack_t));
	if (the_new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = the_new_node;
	the_new_node->n = n;
	the_new_node->next = *a_head;
	the_new_node->prev = NULL;
	*a_head = the_new_node;
}
