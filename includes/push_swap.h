/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:00:06 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 13:45:58 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **pile);
void	sb(t_stack **pile);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **pile);
void	rb(t_stack **pile);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **pile);
void	rrb(t_stack **pile);
void	rrr(t_stack **stack_a, t_stack **stack_b);

void	pushh(t_stack **src, t_stack **dst);

/* Extra Utils */
int		ft_strtoi(const char *str);
void	ft_putstr(char *str);
void	free_stack(t_stack **pile);
void	exit_error(t_stack **stack_a, t_stack **stack_b);

#endif
