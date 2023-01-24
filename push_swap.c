#include "../includes/push_swap.h"

static void	set_index(t_pile *stack_a, int stack_size)
{
	t_pile	*ptr;
	t_pile	*biggest;
	int			value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		biggest = NULL;
		value = INT_MIN;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				biggest = ptr;
				ptr = stack_a;
			}
			else
				ptr = ptr->next;
		}
		if (biggest != NULL)
			biggest->index = stack_size;
	}
}

int	is_sorted(t_pile *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	push_swap(t_pile **stack_a, t_pile **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if (stack_size == 3)
		small_sort(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}

int	main(int ac, char **argv)
{
	t_pile	*pile_a;
	t_pile	*pile_b;
	int			stacksize;
	char		**tab;

	if (ac < 2)
		return (0);
	tab = filltab_and_checks(ac, argv);

}
