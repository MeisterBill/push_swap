/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:17 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 13:29:29 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/* returns the newly created stack element */

t_pile	*new_stack(int value)
{
	t_pile	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

/* return the last element of the stack (the bottom) */

t_pile	*get_last_stack(t_pile *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

/* return the second last element of the stack */

t_pile	*get_before_last_stack(t_pile *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

/* adds an element to the bottom of the stack */

void	add_bottom(t_pile **stack, t_pile *new)
{
	t_pile	*bottom;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	bottom = get_last_stack(*stack);
	bottom->next = new;
}

/* returns the number of elements in the stack */

int	get_stack_size(t_pile *stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
