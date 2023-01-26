/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:25:02 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 13:35:55 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_pile **stack)
{
	t_pile	*tmp;
	t_pile	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_last_stack(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	do_ra(t_pile **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

void	do_rb(t_pile **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

void	do_rr(t_pile **stack_a, t_pile **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
