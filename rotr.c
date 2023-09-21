#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@a_head: stack head
  *@the_counter: line_number
  *Return: null return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int the_counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
