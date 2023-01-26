#include "includes/push_swap.h"

static int	get_highest_index(t_pile *stack)
{
	int index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

void	small_sort(t_pile **stack)
{
	int	highest;

	if (is_sorted(*stack) == 1)
		return ;
	highest = get_highest_index(*stack);
	if ((*stack)->index == highest)
		ra(stack);
	else if ((*stack)->next->index == highest)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}
