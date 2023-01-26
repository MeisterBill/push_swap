/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:00:06 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 14:02:45 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_pile
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_pile	*next;
}	t_pile;

void	push(t_pile **pile, int value);
void	afficher(t_pile *pile);

void	pa(t_pile **pile_a, t_pile **pile_b);
void	pb(t_pile **pile_a, t_pile **pile_b);
void	sa(t_pile **pile);
void	sb(t_pile **pile);
void	ss(t_pile **pile_a, t_pile **pile_b);
void	ra(t_pile **pile);
void	rb(t_pile **pile);
void	rr(t_pile **pile_a, t_pile **pile_b);
void	rra(t_pile **pile);
void	rrb(t_pile **pile);
void	rrr(t_pile **pile_a, t_pile **pile_b);

#endif
