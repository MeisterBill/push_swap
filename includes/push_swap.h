/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:00:06 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 15:15:05 by artvan-d         ###   ########.fr       */
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

/* Algos */
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
int		abs_nb(int nb);
void	get_cost(t_stack **stack_a, t_stack **stack_b);
void	do_best_move(t_stack **stack_a, t_stack **stack_b);
int		get_lowest_index_pos(t_stack **stack);
void	get_target_position(t_stack **a, t_stack **b);
int		is_sorted(t_stack *stack);
void	small_sort(t_stack **stack);
void	sort(t_stack **stack_a, t_stack **stack_b);

/* Checks */
int		check_if_sign(char c);
int		check_if_digit(int c);
int		check_if_nbr(char *tab);
int		check_if_int(const char *tab);
int		check_argv(char **tab);
char	**filltab_and_checks(int ac, char **argv);

/* Tab */
char	**ft_free_tab(char **tab);
int		ft_size_tab(char **tab);
char	**filltab_with_more(int ac, char **argv);
char	**fill_tab_with_one(char **argv);

/* Instructions */
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

/* Stack */
t_stack	*new_stack(int value);
t_stack	*get_last_stack(t_stack *stack);
t_stack	*get_before_last_stack(t_stack *stack);
void	add_bottom(t_stack **stack, t_stack *new);
int		get_stack_size(t_stack *stack);

/* Split */
char	**ft_split(char const *s, char c);

/* Extra Utils */
int		ft_strtoi(const char *str);
void	ft_putstr(char	*str);
void	free_stack(t_stack **stack);
void	exit_error(t_stack **stack_a, t_stack **stack_b);

#endif
