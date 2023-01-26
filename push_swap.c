/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:08:23 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 13:56:21 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static t_stack	*fill_stack_a(int size, char **tab)
{
	t_stack		*stack_a;
	long int	nb;
	int			i;

	stack_a = NULL;
	nb = 0;
	i = 0;
	while (i < size && tab[i])
	{
		nb = ft_strtoi(tab[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			exit_error(&stack_a, NULL);
		if (i == 0)
			stack_a = new_stack((int)nb);
		else
			add_bottom(&stack_a, new_stack((int)nb));
		i++;
	}
	return (stack_a);
}

static void	set_index(t_stack *stack_a, int stack_size)
{
	t_stack		*ptr;
	t_stack		*biggest;
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

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
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
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			stack_size;
	char		**tab;

	if (ac < 2)
		return (0);
	tab = filltab_and_checks(ac, argv);
	if (tab == NULL)
		exit_error(NULL, NULL);
	stack_b = NULL;
	stack_a = fill_stack_a(ft_size_tab(tab), tab);
	stack_size = get_stack_size(stack_a);
	set_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	// ft_print_stack(stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
