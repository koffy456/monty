#include "monty.h"

/**
 * pall - prints the stack
 * @stack: this is the stack given by main
 * @line_cnt: the amount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
